#include "scanner.h"
#include "symbol_table.h"

#define test_st 1

struct st_entry *symbol_t = NULL;


int main(int argc, char** argv) {
  if (deals_input(argc, argv) == 1) {
      return 1;
  }

  /* Creating Symbol Table */

  #if test_st
    add_entry(symbol_t, "testing", IDENTIFIER, 0, 0);
  #endif


  run_scanner();
  ends_scan(argc);

  return 0;
}
