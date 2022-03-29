#ifndef ANSISEQ_SCREEN_H
#define ANSISEQ_SCREEN_H
#include "common.h"

#define ANSISEQ_SCR_CLR2END  ANSISEQ_ESC "[0J" // Clear to end of screen
#define ANSISEQ_SCR_CLR2BEG  ANSISEQ_ESC "[1J" // Clear to begining of screen
#define ANSISEQ_SCR_CLR_ALL  ANSISEQ_ESC "[2J" // Clear entire screen
#define ANSISEQ_SCR_CLR_SAV  ANSISEQ_ESC "[3J" // Clear saved lines
#define ANSISEQ_SCR_CLR2LEND ANSISEQ_ESC "[0K" // Clear to end of line
#define ANSISEQ_SCR_CLR2LBEG ANSISEQ_ESC "[1K" // Clear to begining of line
#define ANSISEQ_SCR_CLR_LINE ANSISEQ_ESC "[1K" // Clear entire line
#define ANSISEQ_SCR_RESTORE  ANSISEQ_ESC "[?47l" 
#define ANSISEQ_SCR_SAVE     ANSISEQ_ESC "[?47h"

#endif /* ANSISEQ_SCREEN_H */
