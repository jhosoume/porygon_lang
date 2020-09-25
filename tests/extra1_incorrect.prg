int main () {

int w;
int x;
int y;
int z;
int i;
int j;
string resultado;

i = 4;
j = 5;

j = 7;
i = 6;
w = i % j;

x = i + j;

i = 8;
y = i + j:

z = i ? j; /* Error: illegal character ? */

resultado = "\nW = ${w}$ | X = ${x}$ | Y = ${y}$ | Z = ${z}$\n";

write(resultado);

return (0);

}
