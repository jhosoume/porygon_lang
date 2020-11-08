#ifndef TTYPE
#define TTYPE

enum ttype {
    STRING_,
    CHAR_,
    INT_,
    FLOAT_,
    BOOL_,
    VOID_,
    UNDEFINED_,
    NONE_
};

const char* type_string(enum ttype t);

#endif
