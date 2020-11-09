#include "semantic_analysis.h"

void check_main() {
    struct st_entry *entry = find_id("main", 0);
    if (entry == NULL) {
        yyerror("Semantic Error! Main function is not defined.");
    }

}

void semantic_nlz() {
    check_main();
}
