int test(float a1, int b1, bool c1, string s1) {
    return 1;
}

float test_k(float b1) {
    /* Type coercion of return */
    return 1;
}


void main() {
    /* wrong number of arguments */
    test(23.6, 3, "hey");
    /* type coercion of the argument */
    test_k(4);
    test_k(1 - 4 + 7);
    test_k(1 - 4 + 7 * 4.3);

    /* Function calls type mismatch erros */
    /* Missing Parameters */
    test(0.9, 3);
    test_k();
    /* Needs type casting */
    test(34, 1, false, "hey");
    /* Type mismatch */
    test_k(false);
    test(9.0, "a", 123, 28);

}
