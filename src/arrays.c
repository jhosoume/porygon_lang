#include "arrays.h"

#define test_ar 0

void add_int_value(ar_values **values, int val) {
    ar_values *new_value = NULL;
    if ( (new_value = (ar_values *) malloc(sizeof *new_value)) == NULL ) {
        printf("[ERR] Could not store value!\n");
        return;
    }
    new_value->val.int_n = val;
    DL_APPEND(*values, new_value);
}

void add_float_value(ar_values **values, float val) {
    ar_values *new_value = NULL;
    if ( (new_value = (ar_values *) malloc(sizeof *new_value)) == NULL ) {
        printf("[ERR] Could not store value!\n");
        return;
    }
    new_value->val.float_n = val;
    DL_APPEND(*values, new_value);
}

void add_char_value(ar_values **values, char val) {
    ar_values *new_value = NULL;
    if ( (new_value = (ar_values *) malloc(sizeof *new_value)) == NULL ) {
        printf("[ERR] Could not store value!\n");
        return;
    }
    new_value->val.character = val;
    DL_APPEND(*values, new_value);
}

int num_values(ar_values **values) {
    int count;
    ar_values *element = NULL;
    DL_COUNT(*values, element, count);
    return count;
}

void free_values(ar_values **values) {
    ar_values *element = NULL;
    ar_values *tmp = NULL;
    DL_FOREACH_SAFE(*values, element, tmp) {
        DL_DELETE(*values, element);
        free(element);
    }
}

ar_values *get_in(ar_values **values, int indx) {
    int it = 0;
    ar_values *element = NULL;
    DL_FOREACH(*values, element) {
        if (it == indx) {
            return element;
        }
        ++it;
    }
    return NULL;

}

#if test_ar
int main() {
    ar_values *my_values = NULL;
    ar_values *vl = NULL;
    for (int val = 0; val < 15; ++val) {
        add_int_value(&my_values, val);
    }
    DL_FOREACH(my_values, vl) printf("Value: %d\n", vl->val.int_n);
    vl = get_in(&my_values, 7);
    if (vl != NULL) printf("FOUND! %d\n", vl->val.int_n);
    free_values(&my_values);
    return 0;
}
#endif
