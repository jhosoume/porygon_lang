/*
Universidade de Brasilia - UnB
Departamento de Ciência da Computação - CIC

Program to count the number of bills corresponding to the value inputed.
*/

void StartMsg() {

write("Program: BILL's COUNT\n");

}

int main() {

int vde; // Input value to calculate the number od bills.
int n1;
int n5;
int n10;
int n25;
int n50;
int n100;
int valida = 0;
int i;
int st;
string str1 = "\nBills of ";
string cem = "100";
string cinquenta = "50";
string vinteECinco = "25";
string dez = "10";
string cinco = "5";
string um = "1";

StartMsg();

write("\nInput and integer value: ");
read(vde);

n100 = vde/100;
vde = vde - (n100*100);
n50 = vde/50;
vde = vde - (n50*50);
n25 = vde/25;
vde = vde - (n25*25);
n10 = vde/10;
vde = vde - (n10*10);
n5 = vde/5;
vde = vde - (n5*5);
n1 = vde/1;
vde = vde - (n1*1);

write("\nNumber of bills: \n");

if(n100 != 0) {

write(str1);
write(cem);
write(":");
write(n100);

}

if(n50 != 0) {

write(str1);
write(cinquenta);
write(":");
write(n50);

}

if(n25 != 0) {

write(str1);
write(vinteECinco);
write(":");
write(n25);

}

if(n10 != 0) {

write(str1);
write(dez);
write(":");
write(n10);

}

if(n5 != 0) {

write(str1);
write(cinco);
write(":");
write(n5);

}

if(n1 != 0) {

write(str1);
write(um);
write(":");
write(n1);

}


write("\n\nEnd of program.\n\n");

return(0);

}
