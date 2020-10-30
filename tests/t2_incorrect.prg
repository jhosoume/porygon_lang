/* This is a sample incorrect (lexically) input Porygon File */

int main(void) {
    /* Incorrect char constant (bigger than one character) in line 5 col 14 */
    char k = 'some very big char';
    float ________;
    /* Incorrect long definition of an identifier in line 8 col 9*/
    int thisisnotlegalintheClanguagebecauseitistolongandshouldnotbeconsidered
anidentifier;

}
/* Syntax Err line 13, does not have a type specifier that triggers other errors */
float someFunct(flaot a, float b) {
    float something = a +b;
    return something;
}
