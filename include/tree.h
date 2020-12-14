#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "node_type.h"
#include "type.h"
#include "values.h"


struct tree_node {
    struct tree_node *root;     // Store tree_node root
    struct tree_node **leaf;    // Store tree_node leaves (children) from node
    int num_leaves;             // Store number of leaves
    enum node_type node_type;   // Store name of the node
    int size;
    char *name;                 // Store name of the node
    enum ttype type;            // Language type
    bool need_casting;          // Indicates if casting is needed
    union Values value;
    bool is_const;

};

/* Creation of node list based on hint by Diogo */

struct node_list {
    struct tree_node **nodes;   // List to store all nodes
    int size;                   // Number of nodes in the list
    int capacity;               // Total number of nodes that can be added in the list
};

struct node_list *initialize_list();
void push_list(struct node_list *main_node, struct tree_node *node);
struct tree_node *create_node(struct node_list *list, enum node_type nd_type, const char *name, int num_leaves);
struct tree_node *create_node_full(struct node_list *list,
                                   const char *name,
                                   int size,
                                   int num_leaves);
void add_leaf(struct tree_node *root, struct tree_node *leaf, int leaf_indx);
void print_node(struct tree_node *node);
void print_list(struct node_list *list);
void print_tree(struct tree_node *root);
void print_tree_rec(struct tree_node *root, int depth);
void free_node(struct tree_node *node);
void free_list(struct node_list *list);
int set_int_v(struct tree_node *node, int value);
float set_float_v(struct tree_node *node, float value);
bool set_bool_v(struct tree_node *node, bool value);
char set_char_v(struct tree_node *node, char value);

#endif
