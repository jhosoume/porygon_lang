#include "type.h"

const char* type_string(enum ttype t) {
    switch (t) {
        case (STRING_): return "STRING";
        case (CHAR_): return "CHAR";
        case (INT_): return "INT";
        case (FLOAT_): return "FLOAT";
        case (BOOL_): return "BOOL";
        case (VOID_): return "VOID";
        case (UNDEFINED_): return "UNDEFINED";
        default: return "NONE";
    }
}
