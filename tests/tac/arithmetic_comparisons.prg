void main() {
    int b = 4 + 4;
    write(b);
    bool b1 = b > 9;
    write(b1);
    bool b2;
    b2 = false || true && b1;
    write(b2);
    bool b3 = 4 == 4;
    write(b3);
    b3 = 4 == 5;
    write(b3);
    write(b);
    b3 = 8 == b;
    write(b3);
    b3 = 8 != b || 3 != b;
    write(b3);
}
