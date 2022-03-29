#ifndef ANSISEQ_CURSOR_H
#define ANSISEQ_CURSOR_H
#include "common.h"

#define ANSISEQ_CUR_HOME         ANSISEQ_ESC "[H"
#define ANSISEQ_CUR_SET(l, c)    ANSISEQ_ESC "["#l";"#c"H"
#define ANSISEQ_DYN_CUR_SET      ANSISEQ_CUR_SET(%d, %d)
#define ANSISEQ_CUR_UP(n)        ANSISEQ_ESC "["#n"A"
#define ANSISEQ_DYN_CUR_UP       ANSISEQ_CUR_UP(%d)
#define ANSISEQ_CUR_DOWN(n)      ANSISEQ_ESC "["#n"B"
#define ANSISEQ_DYN_CUR_DOWN     ANSISEQ_CUR_DOWN(%d)
#define ANSISEQ_CUR_RIGHT(n)     ANSISEQ_ESC "["#n"C"
#define ANSISEQ_DYN_CUR_RIGHT    ANSISEQ_CUR_RIGHT(%d)
#define ANSISEQ_CUR_LEFT(n)      ANSISEQ_ESC "["#n"D"
#define ANSISEQ_DYN_CUR_LEFT     ANSISEQ_CUR_LEFT(%d)
#define ANSISEQ_CUR_UP_BEG(n)    ANSISEQ_ESC "["#n"E"
#define ANSISEQ_DYN_CUR_UP_BEG   ANSISEQ_CUR_UP_BEG(%d)
#define ANSISEQ_CUR_DOWN_BEG(n)  ANSISEQ_ESC "["#n"F"
#define ANSISEQ_DYN_CUR_DOWN_BEG ANSISEQ_CUR_DOWN_BEG(%d)
#define ANSISEQ_CUR_SET_COL(n)   ANSISEQ_ESC "["#n"G"
#define ANSISEQ_DYN_CUR_SET_COL  ANSISEQ_CUR_SET_COL(%d)
#define ANSISEQ_CUR_REQ_POS      ANSISEQ_ESC "[6n"
#define ANSISEQ_CUR_MOVE_1UP     ANSISEQ_ESC "M"
#define ANSISEQ_CUR_SAVE_DEC     ANSISEQ_ESC "7"
#define ANSISEQ_CUR_RESTORE_DEC  ANSISEQ_ESC "8"
#define ANSISEQ_CUR_SAVE_SCO     ANSISEQ_ESC "[s"
#define ANSISEQ_CUR_RESTORE_SCO  ANSISEQ_ESC "[u"
#define ANSISEQ_CUR_INVISIBLE    ANSISEQ_ESC "[?25l"
#define ANSISEQ_CUR_VISIBLE      ANSISEQ_ESC "[?25h"

#endif /* ANSISEQ_CURSOR_H */