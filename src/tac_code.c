#include "tac_code.h"

#define test_code 0

void prepend_code_line(tac_code **tac, const char *code) {
    tac_code *new_cline = NULL;
    UT_string *line = NULL;
    utstring_new(line);
    utstring_printf(line, "%s", code);
    if ( (new_cline = (tac_code *) malloc(sizeof *new_cline)) == NULL ) {
        printf("[ERR] Could not store value!\n");
        return;
    }
    new_cline->code = line;
    DL_PREPEND(*tac, new_cline);
}

void append_code_line(tac_code **tac, const char *code) {
    if (code == NULL || strlen(code) == 0) return;
    tac_code *new_cline = NULL;
    UT_string *line;
    utstring_new(line);
    utstring_printf(line, "%s", code);
    if ( (new_cline = (tac_code *) malloc(sizeof *new_cline)) == NULL ) {
        printf("[ERR] Could not store value!\n");
        return;
    }
    new_cline->code = line;
    DL_APPEND(*tac, new_cline);
}

int num_lines(tac_code **tac) {
    int count;
    tac_code *element = NULL;
    DL_COUNT(*tac, element, count);
    return count;
}

void free_tac(tac_code **tac) {
    tac_code *element = NULL;
    tac_code *tmp = NULL;
    DL_FOREACH_SAFE(*tac, element, tmp) {
        DL_DELETE(*tac, element);
        utstring_free(element->code);
        free(element);
    }
}

tac_code *tac_in(tac_code **tac, int indx) {
    int it = 0;
    tac_code *element = NULL;
    DL_FOREACH(*tac, element) {
        if (it == indx) {
            return element;
        }
        ++it;
    }
    return NULL;
}
void print_code(tac_code **tac) {
    tac_code *line = NULL;
    printf("\n TAC (count = %d)\n", num_lines(tac));
    DL_FOREACH(*tac, line) {
        printf("%s", utstring_body(line->code));
    }
    printf("\n");
}

void unite_code(tac_code **tac1, tac_code **tac2) {
    tac_code *line = NULL;
    if (tac2 == NULL || *tac2 == NULL) return;
    DL_FOREACH(*tac2, line) {
        if (utstring_len(line->code) > 0) {
            append_code_line(tac1, utstring_body(line->code));
        }
    }
}

void save_file(tac_code **tac, const char *file_name) {
    FILE *fptr;
    fptr = fopen(file_name, "w");
    if (fptr == NULL) {
        printf("[ERR] Could not create TAC file!\n");
        return;
    }
    tac_code *line = NULL;
    fprintf(fptr, ".table\n");
    fprintf(fptr, ".code\n");
    DL_FOREACH(*tac, line) {
        fprintf(fptr, "%s", utstring_body(line->code));
    }
    fclose(fptr);
}

#if test_code
int main() {
    tac_code *tac = NULL;
    tac_code *tac2 = NULL;
    append_code_line(&tac, "ADD $1, $2");
    append_code_line(&tac2, "MULT $3, $4");
    unite_code(&tac, &tac2);
    append_code_line(&tac, "SUB $1, $2");
    prepend_code_line(&tac, "L1:");
    append_code_line(&tac, utstring_body(tac2->code));
    print_code(&tac);
    printf("_________________________\n");
    print_code(&tac2);
    free_tac(&tac);
    free_tac(&tac2);
    return 0;
}
#endif
