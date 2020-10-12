#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>


struct tree_node {
    struct tree_node *root;     // Store tree_node root
    struct tree_node **leaf;    // Store tree_node leaves (children) from node
    int num_leaves;             // Store number of leaves
    char *name;                 // Store name of the node
};

struct node_list {
    struct tree_node **nodes;   // List to store all nodes
    int size;                   // Number of nodes in the list
    int capacity;               // Total number of nodes that can be added in the list
};

struct node_list *initialize_list();
void push_list(struct node_list *main_node, struct tree_node *node);

#endif
