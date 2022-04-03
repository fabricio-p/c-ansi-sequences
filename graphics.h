#ifndef ANSIQ_GRAPHICS_H
#define ANSIQ_GRAPHICS_H
#include "common.h"

#define ANSIQ_GR_SEQ(s) ANSIQ_ESC"[" s "m"

/* Text colors */
#define ANSIQ_FG_BLACK    ";30"
#define ANSIQ_FG_RED      ";31"
#define ANSIQ_FG_GREEN    ";32"
#define ANSIQ_FG_YELLOW   ";33"
#define ANSIQ_FG_BLUE     ";34"
#define ANSIQ_FG_MAGENTA  ";35"
#define ANSIQ_FG_CYAN     ";36"
#define ANSIQ_FG_WHITE    ";37"

#define __ANSIQ_SETFG_BLACK   ANSIQ_ESC "[" ANSIQ_FG_BLACK
#define __ANSIQ_SETFG_RED     ANSIQ_ESC "[" ANSIQ_FG_RED
#define __ANSIQ_SETFG_GREEN   ANSIQ_ESC "[" ANSIQ_FG_GREEN
#define __ANSIQ_SETFG_YELLOW  ANSIQ_ESC "[" ANSIQ_FG_YELLOW
#define __ANSIQ_SETFG_BLUE    ANSIQ_ESC "[" ANSIQ_FG_BLUE
#define __ANSIQ_SETFG_MAGENTA ANSIQ_ESC "[" ANSIQ_FG_MAGENTA
#define __ANSIQ_SETFG_CYAN    ANSIQ_ESC "[" ANSIQ_FG_CYAN
#define __ANSIQ_SETFG_WHITE   ANSIQ_ESC "[" ANSIQ_FG_WHITE

#define ANSIQ_SETFG_BLACK   __ANSIQ_SETFG_BLACK   "m"
#define ANSIQ_SETFG_RED     __ANSIQ_SETFG_RED     "m"
#define ANSIQ_SETFG_GREEN   __ANSIQ_SETFG_GREEN   "m"
#define ANSIQ_SETFG_YELLOW  __ANSIQ_SETFG_YELLOW  "m"
#define ANSIQ_SETFG_BLUE    __ANSIQ_SETFG_BLUE    "m"
#define ANSIQ_SETFG_MAGENTA __ANSIQ_SETFG_MAGENTA "m"
#define ANSIQ_SETFG_CYAN    __ANSIQ_SETFG_CYAN    "m"
#define ANSIQ_SETFG_WHITE   __ANSIQ_SETFG_WHITE   "m"

#define ANSIQ_BRIGHT_FG(c)     ANSIQ_FG_##c ";1"
#define ANSIQ_FG256(n)         ";38;5;" #n
#define ANSIQ_SETBRIGHT_FG(c)  ANSIQ_ESC "[" ANSIQ_BRIGHT_FG(c) "m"
#define ANSIQ_SETFG256(n)      ANSIQ_ESC "[" ANSIQ_FG256(n) "m"
#define ANSIQ_DYN_BRIGHT_FG    ANSIQ_BRIGHT_FG(%d)
#define ANSIQ_DYN_FG256        ANSIQ_FG256(%d)
#define ANSIQ_DYN_SETBRIGHT_FG ANSIQ_SETBRIGHT_FG(%d)
#define ANSIQ_DYN_SETFG256     ANSIQ_SETFG256(%d)

#define ANSIQ_FG_RGB(r, g, b)    ";38;2;"#r";"#g";"#b
#define ANSIQ_SETFG_RGB(r, g, b) ANSIQ_ESC "[" ANSIQ_FG_RGB(r, g, b) "m"
#define ANSIQ_DYN_FG_RGB         ANSIQ_FG_RGB(%d, %d, %d)
#define ANSIQ_DYN_SETFG_RGB      ANSIQ_SETFG_RGB(%d, %d, %d)

#define ANSIQ_FG_DEFAULT ANSIQ_ESC "[39m" // Set the foreground
                                              // color to the default one
                                              // (i.e. reset foreground
                                              //  colof only)

/* Background colors */
#define ANSIQ_BG_BLACK    ";40"
#define ANSIQ_BG_RED      ";41"
#define ANSIQ_BG_GREEN    ";42"
#define ANSIQ_BG_YELLOW   ";43"
#define ANSIQ_BG_BLUE     ";44"
#define ANSIQ_BG_MAGENTA  ";45"
#define ANSIQ_BG_CYAN     ";46"
#define ANSIQ_BG_WHITE    ";47"

#define __ANSIQ_SETBG_BLACK   ANSIQ_ESC "[" ANSIQ_BG_BLACK
#define __ANSIQ_SETBG_RED     ANSIQ_ESC "[" ANSIQ_BG_RED
#define __ANSIQ_SETBG_GREEN   ANSIQ_ESC "[" ANSIQ_BG_GREEN
#define __ANSIQ_SETBG_YELLOW  ANSIQ_ESC "[" ANSIQ_BG_YELLOW
#define __ANSIQ_SETBG_BLUE    ANSIQ_ESC "[" ANSIQ_BG_BLUE
#define __ANSIQ_SETBG_MAGENTA ANSIQ_ESC "[" ANSIQ_BG_MAGENTA
#define __ANSIQ_SETBG_CYAN    ANSIQ_ESC "[" ANSIQ_BG_CYAN
#define __ANSIQ_SETBG_WHITE   ANSIQ_ESC "[" ANSIQ_BG_WHITE

#define ANSIQ_SETBG_BLACK   __ANSIQ_SETBG_BLACK   "m"
#define ANSIQ_SETBG_RED     __ANSIQ_SETBG_RED     "m"
#define ANSIQ_SETBG_GREEN   __ANSIQ_SETBG_GREEN   "m"
#define ANSIQ_SETBG_YELLOW  __ANSIQ_SETBG_YELLOW  "m"
#define ANSIQ_SETBG_BLUE    __ANSIQ_SETBG_BLUE    "m"
#define ANSIQ_SETBG_MAGENTA __ANSIQ_SETBG_MAGENTA "m"
#define ANSIQ_SETBG_CYAN    __ANSIQ_SETBG_CYAN    "m"
#define ANSIQ_SETBG_WHITE   __ANSIQ_SETBG_WHITE   "m"

#define ANSIQ_BRIGHT_BG(c)     ANSIQ_BG_##c ";1"
#define ANSIQ_BG256(n)         ";48;5;" #n
#define ANSIQ_SETBRIGHT_BG(c)  ANSIQ_ESC "[" ANSIQ_BRIGHT_BG(c) "m"
#define ANSIQ_SETBG256(n)      ANSIQ_ESC "[" ANSIQ_BG256(n) "m"
#define ANSIQ_DYN_BRIGHT_BG    ANSIQ_BRIGHT_BG(%d)
#define ANSIQ_DYN_BG256        ANSIQ_BG256(%d)
#define ANSIQ_DYN_SETBRIGHT_BG ANSIQ_SETBRIGHT_BG(%d)
#define ANSIQ_DYN_SETBG256     ANSIQ_SETBG256(%d)

#define ANSIQ_BG_RGB(r, g, b)    ";48;2;"#r";"#g";"#b
#define ANSIQ_SETBG_RGB(r, g, b) ANSIQ_ESC "[" ANSIQ_BG_RGB(r, g, b) "m"
#define ANSIQ_DYN_BG_RGB         ANSIQ_BG_RGB(%d, %d, %d)
#define ANSIQ_DYN_SETBG_RGB      ANSIQ_SETBG_RGB(%d, %d, %d)

#define ANSIQ_BG_DEFAULT ANSIQ_ESC "[49m" // Set the background color
                                              // to the default one
                                              // (i.e. reset background
                                              //  color only)

/* Text styles */
#define ANSIQ_TXT_BLD ";1" // bold
#define ANSIQ_TXT_DIM ";2" // dim/faint
#define ANSIQ_TXT_ITL ";3" // italic
#define ANSIQ_TXT_UNL ";4" // underline
#define ANSIQ_TXT_BLK ";5" // blinking mode (idk what it does)
#define ANSIQ_TXT_REV ";7" // reversed
#define ANSIQ_TXT_HID ";8" // hidden/invisible
#define ANSIQ_TXT_STK ";9" // strikethrough

#define ANSIQ_SETTXT_BLD ANSIQ_ESC "[" ANSIQ_TXT_BLD "m"
#define ANSIQ_SETTXT_DIM ANSIQ_ESC "[" ANSIQ_TXT_DIM "m"
#define ANSIQ_SETTXT_ITL ANSIQ_ESC "[" ANSIQ_TXT_ITL "m"
#define ANSIQ_SETTXT_UNL ANSIQ_ESC "[" ANSIQ_TXT_UNL "m"
#define ANSIQ_SETTXT_BLK ANSIQ_ESC "[" ANSIQ_TXT_BLK "m"
#define ANSIQ_SETTXT_REV ANSIQ_ESC "[" ANSIQ_TXT_REV "m"
#define ANSIQ_SETTXT_HID ANSIQ_ESC "[" ANSIQ_TXT_HID "m"
#define ANSIQ_SETTXT_STK ANSIQ_ESC "[" ANSIQ_TXT_STK "m"

#define ANSIQ_GR_RESET   ANSIQ_ESC "[" "0m"

#endif /* ANSIQ_GRAPHICS_H */
