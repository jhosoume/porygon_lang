#ifndef TOKEN_TYPE
#define TOKEN_TYPE

enum token_type {
  ERR_INVALID_ID        = -3,
  ERR_INVALID_CHARCONST = -2,
  ERR_UNKNOWN_TOKEN     = -1,
  IDENTIFIER            = 0,
  INTCONST              = 1,
  FLOATCONST            = 2,
  BOOLEANCONST          = 3,
  CHARCONST             = 4,
  STRINGCONST           = 5,
  WHILE_KW              = 6, /* while */
  FOR_KW                = 7, /* for */
  IN_KW                 = 8, /* in */
  IF_KW                 = 9, /* if */
  ELSE_KW               = 10, /* else */
  RETURN_KW             = 11, /* return */
  READ_KW               = 12, /* read */
  WRITE_KW              = 13, /* write */
  CHAR_TYPE             = 14, /* char */
  INT_TYPE              = 15, /* int */
  FLOAT_TYPE            = 16, /* float */
  STRING_TYPE           = 17, /* string */
  TABLE_TYPE            = 18, /* table */
  BOOL_TYPE             = 19, /* bool */
  VOID_TYPE             = 20, /* void */
  ADD_OP                = 21, /* + */
  SUB_OP                = 22, /* - */
  MULT_OP               = 24, /* * */
  DIV_OP                = 25, /* / */
  REM_OP                = 26, /* % */
  INVERSE_OP            = 27, /* ! */
  LESSTHAN_OP           = 28, /* < */
  LESSEQUAL_OP          = 29, /* <= */
  GREATERTHAN_OP        = 30, /* > */
  

}

#endif
