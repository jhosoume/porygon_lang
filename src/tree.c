#include "tree.h"

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
