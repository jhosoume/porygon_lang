#ifndef PARAMS_H
#define PARAMS_H

#include "uthash.h"
#include "type.h"

struct params_entry {
    int param_indx;
    enum ttype dec_type;
    char name[32];

    UT_hash_handle hh; /* Makes the strucutre Hashable */
};

#endif
