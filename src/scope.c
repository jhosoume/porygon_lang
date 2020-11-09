#include "scope.h"

void add_stack(int scope) {
    scope_stack *old_scope = malloc(sizeof(scope_stack));
    old_scope->scopes = scope;
    STACK_PUSH(sp_stack, old_scope);
}

int pop_stack() {
    scope_stack *elt;
    int scope = 0;
    if (!STACK_EMPTY(sp_stack)) {
        STACK_POP(sp_stack, elt);
        scope = elt->scopes;
        free(elt);
    }
    return scope;
}

void print_stack() {
    int count;
    scope_stack *elt;
    STACK_COUNT(sp_stack, elt, count);
    printf("Stack has %d elements.\n", count);

}


void free_stack() {
    scope_stack *elt;
    while (!STACK_EMPTY(sp_stack)) {
        STACK_POP(sp_stack, elt);
        free(elt);
    }
}

void add_generic(int scope) {
    scope_stack *old_scope = malloc(sizeof(scope_stack));
    old_scope->scopes = scope;
    STACK_PUSH(temp_stack, old_scope);
}

int pop_generic() {
    scope_stack *elt;
    int scope = 0;
    if (!STACK_EMPTY(temp_stack)) {
        STACK_POP(temp_stack, elt);
        scope = elt->scopes;
        free(elt);
    }
    return scope;
}

void free_generic() {
    scope_stack *elt;
    while (!STACK_EMPTY(temp_stack)) {
        STACK_POP(temp_stack, elt);
        free(elt);
    }
}
