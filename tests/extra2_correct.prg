int main() {

int N;
int QUADRADO;
string str;
string nl;

N = 10;
str = "Quadrado: ";
nl = "\n";

while (N >= 1) {

QUADRADO = N * N;

write(str);
write(QUADRADO);
write(nl);

N = N - 1;

}

return(0);

}
