#include "tree.h"
/* Tree implementation based on https://efxa.org/2014/05/25/how-to-create-an-abstract-syntax-tree-while-parsing-an-input-stream/ */


/* Creating a tree list! Makes it easier to access them and free them */
struct node_list *initialize_list() {
    struct node_list *list = malloc(sizeof(struct node_list));
    list->size = 0;
    list->capacity = 8;
    list->nodes = calloc(list->capacity, sizeof(struct tree_node *));
    return list;
}

/* Dynamic list based on https://medium.com/@imjacobclark/working-with-dynamic-arrays-in-c-c7d40a3cea01 */
/* List could be implemented as a linked list, however every time a new node
   is created a malloc should be called. The current implementation skips some
   of these steps, reducing the time needed
*/
void push_list(struct node_list *list, struct tree_node *node) {
    int INCREASE_FACTOR = 4;
    /* Check if the list already reached the capacity */
    if (list->size < list->capacity) {
        /* The the capacity is not reached, just add the node to the list */
        list->nodes[list->size] = node;
        ++list->size;
    } else {
        /* If the capacity has reached its limits, increase capacity first*/
        struct tree_node **re_nodes = realloc(list->nodes, INCREASE_FACTOR * list->capacity * sizeof(struct tree_node *));
        /* Check if the reallocation was succesfull */
        if (re_nodes == NULL) {
            printf("[ERR] Could not increase node tree capacity]\n");
            exit(1);
        } else {
            list->nodes = re_nodes;
            list->capacity = INCREASE_FACTOR * list->capacity;
            /* Properly add the new node */
            list->nodes[list->size] = node;
            ++list->size;
            /* Zero all the others not assigned nodes */
            for (int node_indx = list->size; node_indx < list->capacity; ++node_indx) {
                list->nodes[node_indx] = NULL;
            }
        }
    }
}

/* Allocates space for a node. Also allocs all the needed structures */
struct tree_node *create_node(struct node_list *list, enum node_type nd_type, const char *name, int num_leaves) {
    struct tree_node *node = malloc(sizeof(struct tree_node));
    node->root = NULL;
    node->num_leaves = num_leaves;
    node->size = 0;
    node->leaf = malloc(node->num_leaves * sizeof(struct tree_node**));
    node->node_type = nd_type;
    node->name = malloc(strlen(name) + 1);
    strcpy(node->name, name);
    node->type = UNDEFINED_;
    node->need_casting = false;
    node->value.int_n = 0;
    node->is_const = false;
    node->code = NULL;
    push_list(list, node);
    return node;
}

void add_leaf(struct tree_node *root, struct tree_node *leaf, int leaf_indx) {
    //TODO make guards (verify NULL and size)
    if (root != NULL) {
        root->leaf[leaf_indx] = leaf;
        leaf->root = root;
    }
}


void print_node(struct tree_node *node) {
    printf("-----\n");
    printf("Node -> name: %32s  | num_leaves: %3d\n", node->name, node->num_leaves);
    for (int leaf_indx = 0; leaf_indx < node->num_leaves; ++leaf_indx) {
        printf("Leaf %d: %s\n", leaf_indx, node->leaf[leaf_indx]->name);
    }
    printf("-----\n");
}

void print_list(struct node_list *list) {
    printf("Priting List of all the Nodes -> Size = %d, Capacity = %d\n", list->size, list->capacity);
    for (int node_indx = 0; node_indx < list->size; ++node_indx) {
        print_node(list->nodes[node_indx]);
    }
}

/* Print tree header and calls the function to print the tree recursively */
void print_tree(struct tree_node *root) {
    printf("-------------------------------------------------------------------------------------\n");
    printf("                                    TREE                                     \n");
    printf("-------------------------------------------------------------------------------------\n");
    if (root != NULL) {
        print_tree_rec(root, 0);
    }
    printf("-------------------------------------------------------------------------------------\n");

}


/* Recursive function to print the AST */
void print_tree_rec(struct tree_node *root, int depth) {
    /* Initializations and checking */
    int stage = 0;                  // Used to provide padding
    if (root == NULL) return;
    while (stage < depth - 1) {
        ++stage;
        printf("  ");
    }
    while (stage < depth) {
        ++stage;
        printf(" |--> ");
    }
    printf("%s (type:%s, numLeaves: %d, cast int->float: %s, is_const: %s)",
            root->name,
            type_string(root->type),
            root->num_leaves,
            root->need_casting ? "true" : "false",
            root->is_const ? "true" : "false"
        );
    if (root->is_const) {
        if (root->type == INT_)
            printf(" Value => %d \n", root->value.int_n);
        if (root->type == FLOAT_)
            printf(" Value => %f \n", root->value.float_n);
        if (root->type == BOOL_)
            printf(" Value => %s \n", root->value.boolean ? "true" : "false");
        if (root->type == CHAR_)
            printf(" Value => %c \n", root->value.character);
    } else {
        printf("\n");
    }
    /* Recursive call to traverse through the tree */
    for (int leaf_indx = 0; leaf_indx < root->num_leaves; ++leaf_indx) {
        print_tree_rec(root->leaf[leaf_indx], depth + 1);
    }

}

/* Function used to free a single node of the tree */
void free_node(struct tree_node *node) {
    /* Free a single node of the tree */
    if (node == NULL) {
        // printf("NULL NODE POINTER!\n");
        return;
    }
    // printf("FREEING NODE %s\n", node->name);
    /* Free all the structures */
    free(node->leaf); node->leaf = NULL;
    free(node->name); node->name = NULL;
    free_tac(&node->code); node->code = NULL;
    free(node);
}

/* Function to free all the nodes in the list */
void free_list(struct node_list *list) {
    if (list == NULL) {
        // printf("NULL LIST POINTER!\n");
        return;
    }
    /* Free Nodes! */
    for (int node_indx = 0; node_indx < list->size; ++node_indx) {
        free_node(list->nodes[node_indx]);
    }
    /* Properly free list */
    free(list->nodes);
    free(list);
}

/* Bellow are helper functions to set values for the nodes*/
int set_int_v(struct tree_node *node, int value) {
    node->value.int_n = value;
    node->is_const = true;
    return value;
}

float set_float_v(struct tree_node *node, float value) {
    node->value.float_n = value;
    node->is_const = true;
    return value;
}

bool set_bool_v(struct tree_node *node, bool value) {
    node->value.boolean = value;
    node->is_const = true;
    return value;
}

char set_char_v(struct tree_node *node, char value) {
    node->value.character = value;
    node->is_const = true;
    return value;
}
