#include "scanner.h"
#include "symbol_table.h"

/* Helper to test the symbol table*/
#define test_st 1

/* Global creation of a symbol table
   Since more than one component of the compiler is going to use the symbol
   table, a global scope was chosen for creation. This also helps the hash
   manipulation from the uthash.
*/
struct st_entry *symbol_table = NULL;


int main(int argc, char** argv) {
    if (deals_input(argc, argv) == 1) {
        return 1;
  }

  /* Creating Symbol Table */

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
    print_table();
    #endif

    /* Scanner functions */
    run_scanner();
    ends_scan(argc);

    free_st();

    return 0;
}
