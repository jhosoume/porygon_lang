#include "parser.h"
#include "scanner.h"
#include "symbol_table.h"
#include "tree.h"
#include "scope.h"
#include "semantic_analysis.h"

/* Helper to test the symbol table*/
#define test_st 0
#define test_tree 0

/* Global creation of a symbol table
   Since more than one component of the compiler is going to use the symbol
   table, a global scope was chosen for creation. This also helps the hash
   manipulation from the uthash.
*/
/* Declare symbol table and the list of nodes of the abstract syntax tree. */
struct st_entry *symbol_table = NULL;
struct node_list *ast_tree_list = NULL;
struct tree_node *ast_root = NULL;

scope_stack *sp_stack = NULL;
scope_stack *temp_stack = NULL;
int cur_scope = 0;
int count_scope = 0;
int symbol_count = 0;
int errors = 0;
int label_num = 0;

extern int synt_errors;



int main(int argc, char** argv) {
    ast_tree_list = initialize_list();
    if (deals_input(argc, argv) == 1) {
        return 1;
  }

  /* Creating Symbol Table */

  /* Segment of code only used to test the AST!  */
    #if test_st

    add_entry("testing", IDENTIFIER, 0, 0);
    add_entry("other_func", IDENTIFIER, 1, 9);
    add_entry("true", BOOL_TYPE, 2, 15);
    add_entry("false", BOOL_TYPE, 73, 6);
    add_entry("an_identifier", IDENTIFIER, 15, 7);


    struct st_entry *entry = NULL;
    HASH_FIND_STR(symbol_table, "other_func", entry);
    /* Always remember to check if the entry was found! */
    if (entry) {
        red_print();
        printf("Found identifier %s in line %d\n", entry->identifier, entry->line);
        reset_pcolor();
    }
    HASH_FIND_STR(symbol_table, "an_identifier", entry);
    if (entry) {
        red_print();
        printf("Found identifier %s in line %d\n", entry->identifier, entry->line);
        reset_pcolor();
    }
    HASH_FIND_STR(symbol_table, "an_identifier", entry);
    if (entry) {
        red_print();
        printf("Found identifier %s in line %d\n", entry->identifier, entry->line);
        reset_pcolor();
    }
    print_table();
    #endif

    #if test_tree
    struct node_list *test_tree_list = initialize_list();
    struct tree_node *n0, *n1, *n2, *n3, *n4, *n5, *n6, *n7, *n8;
    n0 = create_node(test_tree_list, "n0", 0);
    n1 = create_node(test_tree_list, "n1", 0);
    n2 = create_node(test_tree_list, "n2", 2); // CAREFUL! If the nodes are not added, SEG FAULT
    add_leaf(n2, n0, 0);
    add_leaf(n2, n1, 1);

    n3 = create_node(test_tree_list, "n3", 0);
    n4 = create_node(test_tree_list, "n4", 0);
    n5 = create_node(test_tree_list, "n5", 0);
    n6 = create_node(test_tree_list, "n6", 3);
    add_leaf(n6, n3, 0);
    add_leaf(n6, n4, 1);
    add_leaf(n6, n5, 2);

    n7 = create_node(test_tree_list, "n7", 2);
    add_leaf(n7, n2, 0);
    add_leaf(n7, n6, 1);

    n8 = create_node(test_tree_list, "n8", 1);
    add_leaf(n8, n7, 0);


    print_list(test_tree_list);
    print_tree(n8);
    free_list(test_tree_list);

    #endif
    /* Code to test AST ends here! */

    /* Scanner functions */
    // run_scanner();
    /* Starts parser */
    yyparse();
    ends_scan(argc);
    semantic_nlz();
    print_table();
    /* Only print tree if no synt errors are reported, since they cause failure */
    if (synt_errors == 0) {
        print_tree(ast_root);
    } else {
        printf("Not printing AST, found errors!\n");
    }
    print_stack();

    free_st();
    free_list(ast_tree_list);
    free_stack();
    free_generic();

    return 0;
}
