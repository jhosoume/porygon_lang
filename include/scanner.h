#ifndef SCANNER_H
#define SCANNER_H

#include <stdio.h>
#include "porygon_lex.h"
#include "token.h"
#include "token_type.h"

/* Used by the scanner to identify line and column */
int line_num = 1;
int column_num = 1;

#endif
