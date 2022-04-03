#ifndef ANSIQ_CURSOR_H
#define ANSIQ_CURSOR_H
#include "common.h"

#define ANSIQ_CUR_HOME         ANSIQ_ESC "[H"
#define ANSIQ_CUR_SET(l, c)    ANSIQ_ESC "["#l";"#c"H"
#define ANSIQ_DYN_CUR_SET      ANSIQ_CUR_SET(%d, %d)
#define ANSIQ_CUR_UP(n)        ANSIQ_ESC "["#n"A"
#define ANSIQ_DYN_CUR_UP       ANSIQ_CUR_UP(%d)
#define ANSIQ_CUR_DOWN(n)      ANSIQ_ESC "["#n"B"
#define ANSIQ_DYN_CUR_DOWN     ANSIQ_CUR_DOWN(%d)
#define ANSIQ_CUR_RIGHT(n)     ANSIQ_ESC "["#n"C"
#define ANSIQ_DYN_CUR_RIGHT    ANSIQ_CUR_RIGHT(%d)
#define ANSIQ_CUR_LEFT(n)      ANSIQ_ESC "["#n"D"
#define ANSIQ_DYN_CUR_LEFT     ANSIQ_CUR_LEFT(%d)
#define ANSIQ_CUR_UP_BEG(n)    ANSIQ_ESC "["#n"E"
#define ANSIQ_DYN_CUR_UP_BEG   ANSIQ_CUR_UP_BEG(%d)
#define ANSIQ_CUR_DOWN_BEG(n)  ANSIQ_ESC "["#n"F"
#define ANSIQ_DYN_CUR_DOWN_BEG ANSIQ_CUR_DOWN_BEG(%d)
#define ANSIQ_CUR_SET_COL(n)   ANSIQ_ESC "["#n"G"
#define ANSIQ_DYN_CUR_SET_COL  ANSIQ_CUR_SET_COL(%d)
#define ANSIQ_CUR_REQ_POS      ANSIQ_ESC "[6n"
#define ANSIQ_CUR_MOVE_1UP     ANSIQ_ESC "M"
#define ANSIQ_CUR_SAVE_DEC     ANSIQ_ESC "7"
#define ANSIQ_CUR_RESTORE_DEC  ANSIQ_ESC "8"
#define ANSIQ_CUR_SAVE_SCO     ANSIQ_ESC "[s"
#define ANSIQ_CUR_RESTORE_SCO  ANSIQ_ESC "[u"
#define ANSIQ_CUR_INVISIBLE    ANSIQ_ESC "[?25l"
#define ANSIQ_CUR_VISIBLE      ANSIQ_ESC "[?25h"

#endif /* ANSIQ_CURSOR_H */
