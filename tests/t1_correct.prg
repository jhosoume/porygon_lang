/* This is a sample correct (lexically) input Porygon File */

int sample_function() {
    return 93 + 72;
}

float another_function(float p1, float p2, char c1 /* comment */) {
    return p1 % p2;
}

bool third_func(bool b) {
    bool var = 7 > 9;
    var = var && true;
    return  9 <= 10  || !false;
}

int main() {
    /* Do some computations */
    int one_var = 3;
    int one = 10 / 10;
    float another;
    float result;
    another = 7.98; /* This comment should not appear */

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
