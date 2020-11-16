void void_func() {
    1 + 1 + 1 + 2;
}

/* Functions with mismatch returns */
bool test_return() {
    return 1;
    if (true) {
        return 7.9;
    }
    return false;
}

void main() {

}
