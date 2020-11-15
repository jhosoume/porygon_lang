int test(float a1, int b1, bool c1, string s1) {
    return 1;
}

float test_k(int b1) {
    return 1;
}

void main() {
    test(23.6, 3, "hey");
    test_l(4);

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
