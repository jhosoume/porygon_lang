int i;
int fib(int i) {
    int a;
    int b;
    if (i == 1){
        return 1;
    } else {
        if (i == 2) {
            return 1;
        } else {
            a = fib(i - 1);
            b = fib(i - 2);
            return a + b;
        }
    }
    return 0;
}

void main() {
    int i;
    int num;
    i = 0;
    read(i);
    if (i >0) {
        num = fib(i);
        write(num);
    }

}
