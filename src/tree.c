#include "tree.h"
/* Tree implementation based on https://github.com/Aendur/KyuubiNoLang */

struct node_list *initialize_list() {
    struct node_list *list = malloc(sizeof(struct node_list));
    list->size = 0;
    list->capacity = 8;
    list->nodes = calloc(list->capacity, sizeof(struct tree_node *));
    return list;
}

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

struct tree_node *create_node(struct node_list *list, const char *name, int num_leaves) {
    struct tree_node *node = malloc(sizeof(struct tree_node));
    node->root = NULL;
    node->num_leaves = num_leaves;
    node->leaf = malloc(node->num_leaves * sizeof(struct tree_node**));
    node->name = malloc(strlen(name) + 1);
    strcpy(node->name, name);
    push_list(list, node);
    return node;
}

void add_leaf(struct tree_node *root, struct tree_node *leaf, int leaf_indx) {
    //TODO make guards (verify NULL and size)
    root->leaf[leaf_indx] = leaf;
    leaf->root = root;
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

void print_tree(struct tree_node *root) {
    printf("-------------------------------------------------------------------------------------\n");
    printf("                                    TREE                                     \n");
    printf("-------------------------------------------------------------------------------------\n");
    if (root != NULL) {
        print_tree_rec(root, 0);
    }
    printf("-------------------------------------------------------------------------------------\n");

}


void print_tree_rec(struct tree_node *root, int depth) {
    int stage = 0;
    while (stage < depth - 1) {
        ++stage;
        printf("    ");
    }
    while(stage < depth) {
        ++stage;
        printf(" -> ");
    }
    printf("%s\n", root->name);

    for (int leaf_indx = 0; leaf_indx < root->num_leaves; ++leaf_indx) {
        print_tree_rec(root->leaf[leaf_indx], depth + 1);
    }

}


void free_node(struct tree_node *node) {
    /* Free a single node of the tree */
    if (node == NULL) {
        printf("NULL NODE POINTER!\n");
        return;
    }
    printf("FREEING NODE %s\n", node->name);
    free(node->leaf); node->leaf = NULL;
    free(node->name); node->name = NULL;
    free(node);
}

void free_list(struct node_list *list) {
    if (list == NULL) {
        printf("NULL LIST POINTER!\n");
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
