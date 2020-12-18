int sum(int a1, int a2) {
    int repeated = 9;
    return a1 + a2;
}

float test(float a1, int a2) {
    float repeated = 10;
    return repeated - a2;

}

void main() {
    int k = sum(1, 3);
    write(k);
    float num = test(0.1, 2);
    write(num);
}
