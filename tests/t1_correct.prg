/* This is a sample correct (lexically) input Porygon File */

int sample_function() {
    /* Checking behavior of string and char */
    string my_phrase = "a";
    char my_letter = 'a';

    return 93 + 72;
}

float another_function(float p1, float p2, char c1 /* comment */) {
    return p1 % p2;
}

bool third_func(bool b) {
    bool var = (7 > 9) && true;
    return  9 <= 10  || !false;
}

int main(int argc) {
    /* Do some computations */
    (5 - 4) * 10;
    int one_var = 3;
    int one = 10 / 10;
    float another;
    float result;
    string input;
    another = 7.98; /* This comment should not appear */
    int arr[] = [1, 2, 3, 4];
    int a;
    a = 83;
    bool test = third_func(true);
    another = another_function(1.5, 6.0, 'a');
    string one_s = "Im a string!";

    table float balance[] = | ("id", "profit", "debt") : (0, 1, 2), (0.2, 0.9, 108.3), (2.3, 5.3, 9.6)|;



    bool ttrue = !false;

    read(input);

    write("Running implicit conversion.");

    if (ttrue) {
        result = another - one_var;
    } else {
        result = one_var + another;
    }


    return 1;
}
/*
    All this block is considered as a comment.
