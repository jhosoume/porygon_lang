int int_func() {
    return 93;
}

float float_func() {
    int my_var = 7;
    return 9.0;
}

int int_func() {
    /* Re-declaration of variable */
    int my_var = 73;
    int my_var = 42;
    return 8 + 10;
}


int main() {
    int arr[] = [1, 2, 3];
    /* Indexing without using an integer */
    arr[5:8.];
    int my_var = 42;

    /* Type Mismatch */
    9 + 'a';
    int var = true + 9.0;
    'b' * 7.3;
    string ks = "andb" / 6;
    34 % false;
    float ls = 123.4 - 'c';
    234 - 93.0 + ('a' + 123);
    int var_2 = int_func() + float_func();

    /* Function used without being called */
    int var_3 = int_func;

    /* Simple variable being used as a function */
    int var_4 = 123 + my_var();

    !true;
    !arr[0];


    /* Values should be coerced */
    234 - 93.0 + (934 + 123);
    (6 * 9) + 5 / 3 - int_func();




    /* Missing return value */

}
