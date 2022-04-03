#:fndef ANSIQ_SCREEN_H
#define ANSIQ_SCREEN_H
#include "common.h"

#define ANSIQ_SCR_CLR2END  ANSIQ_ESC "[0J" // Clear to end of screen
#define ANSIQ_SCR_CLR2BEG  ANSIQ_ESC "[1J" // Clear to begining of screen
#define ANSIQ_SCR_CLR_ALL  ANSIQ_ESC "[2J" // Clear entire screen
#define ANSIQ_SCR_CLR_SAV  ANSIQ_ESC "[3J" // Clear saved lines
#define ANSIQ_SCR_CLR2LEND ANSIQ_ESC "[0K" // Clear to end of line
#define ANSIQ_SCR_CLR2LBEG ANSIQ_ESC "[1K" // Clear to begining of line
#define ANSIQ_SCR_CLR_LINE ANSIQ_ESC "[1K" // Clear entire line
#define ANSIQ_SCR_RESTORE  ANSIQ_ESC "[?47l" 
#define ANSIQ_SCR_SAVE     ANSIQ_ESC "[?47h"

#endif /* ANSIQ_SCREEN_H */
