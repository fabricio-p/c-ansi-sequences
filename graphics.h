#ifndef ANSISEQ_GRAPHICS_H
#define ANSISEQ_GRAPHICS_H
#include "common.h"

#define ANSISEQ_GR_SEQ(s) ANSISEQ_ESC"[" s "m"

/* Text colors */
#define ANSISEQ_FG_BLACK    ";30"
#define ANSISEQ_FG_RED      ";31"
#define ANSISEQ_FG_GREEN    ";32"
#define ANSISEQ_FG_YELLOW   ";33"
#define ANSISEQ_FG_BLUE     ";34"
#define ANSISEQ_FG_MAGENTA  ";35"
#define ANSISEQ_FG_CYAN     ";36"
#define ANSISEQ_FG_WHITE    ";37"

#define __ANSISEQ_SETFG_BLACK   ANSISEQ_ESC "[" ANSISEQ_FG_BLACK
#define __ANSISEQ_SETFG_RED     ANSISEQ_ESC "[" ANSISEQ_FG_RED
#define __ANSISEQ_SETFG_GREEN   ANSISEQ_ESC "[" ANSISEQ_FG_GREEN
#define __ANSISEQ_SETFG_YELLOW  ANSISEQ_ESC "[" ANSISEQ_FG_YELLOW
#define __ANSISEQ_SETFG_BLUE    ANSISEQ_ESC "[" ANSISEQ_FG_BLUE
#define __ANSISEQ_SETFG_MAGENTA ANSISEQ_ESC "[" ANSISEQ_FG_MAGENTA
#define __ANSISEQ_SETFG_CYAN    ANSISEQ_ESC "[" ANSISEQ_FG_CYAN
#define __ANSISEQ_SETFG_WHITE   ANSISEQ_ESC "[" ANSISEQ_FG_WHITE

#define ANSISEQ_SETFG_BLACK   __ANSISEQ_SETFG_BLACK   "m"
#define ANSISEQ_SETFG_RED     __ANSISEQ_SETFG_RED     "m"
#define ANSISEQ_SETFG_GREEN   __ANSISEQ_SETFG_GREEN   "m"
#define ANSISEQ_SETFG_YELLOW  __ANSISEQ_SETFG_YELLOW  "m"
#define ANSISEQ_SETFG_BLUE    __ANSISEQ_SETFG_BLUE    "m"
#define ANSISEQ_SETFG_MAGENTA __ANSISEQ_SETFG_MAGENTA "m"
#define ANSISEQ_SETFG_CYAN    __ANSISEQ_SETFG_CYAN    "m"
#define ANSISEQ_SETFG_WHITE   __ANSISEQ_SETFG_WHITE   "m"

#define ANSISEQ_BRIGHT_FG(c)     ANSISEQ_FG_##c ";1"
#define ANSISEQ_FG256(n)         ";38;5;" #n
#define ANSISEQ_SETBRIGHT_FG(c)  ANSISEQ_ESC "[" ANSISEQ_BRIGHT_FG(c) "m"
#define ANSISEQ_SETFG256(n)      ANSISEQ_ESC "[" ANSISEQ_FG256(n) "m"
#define ANSISEQ_DYN_BRIGHT_FG    ANSISEQ_BRIGHT_FG(%d)
#define ANSISEQ_DYN_FG256        ANSISEQ_FG256(%d)
#define ANSISEQ_DYN_SETBRIGHT_FG ANSISEQ_SETBRIGHT_FG(%d)
#define ANSISEQ_DYN_SETFG256     ANSISEQ_SETFG256(%d)

#define ANSISEQ_FG_RGB(r, g, b)    ";38;2;"#r";"#g";"#b
#define ANSISEQ_SETFG_RGB(r, g, b)            \
  ANSISEQ_ESC "[" ANSISEQ_FG_RGB(r, g, b) "m"
#define ANSISEQ_DYN_FG_RGB         ANSISEQ_FG_RGB(%d, %d, %d)
#define ANSISEQ_DYN_SETFG_RGB      ANSISEQ_SETFG_RGB(%d, %d, %d)

#define ANSISEQ_FG_DEFAULT ANSISEQ_ESC "[39m" // Set the foreground
                                              // color to the default one
                                              // (i.e. reset foreground
                                              //  colof only)

/* Background colors */
#define ANSISEQ_BG_BLACK    ";40"
#define ANSISEQ_BG_RED      ";41"
#define ANSISEQ_BG_GREEN    ";42"
#define ANSISEQ_BG_YELLOW   ";43"
#define ANSISEQ_BG_BLUE     ";44"
#define ANSISEQ_BG_MAGENTA  ";45"
#define ANSISEQ_BG_CYAN     ";46"
#define ANSISEQ_BG_WHITE    ";47"

#define __ANSISEQ_SETBG_BLACK   ANSISEQ_ESC "[" ANSISEQ_BG_BLACK
#define __ANSISEQ_SETBG_RED     ANSISEQ_ESC "[" ANSISEQ_BG_RED
#define __ANSISEQ_SETBG_GREEN   ANSISEQ_ESC "[" ANSISEQ_BG_GREEN
#define __ANSISEQ_SETBG_YELLOW  ANSISEQ_ESC "[" ANSISEQ_BG_YELLOW
#define __ANSISEQ_SETBG_BLUE    ANSISEQ_ESC "[" ANSISEQ_BG_BLUE
#define __ANSISEQ_SETBG_MAGENTA ANSISEQ_ESC "[" ANSISEQ_BG_MAGENTA
#define __ANSISEQ_SETBG_CYAN    ANSISEQ_ESC "[" ANSISEQ_BG_CYAN
#define __ANSISEQ_SETBG_WHITE   ANSISEQ_ESC "[" ANSISEQ_BG_WHITE

#define ANSISEQ_SETBG_BLACK   __ANSISEQ_SETBG_BLACK   "m"
#define ANSISEQ_SETBG_RED     __ANSISEQ_SETBG_RED     "m"
#define ANSISEQ_SETBG_GREEN   __ANSISEQ_SETBG_GREEN   "m"
#define ANSISEQ_SETBG_YELLOW  __ANSISEQ_SETBG_YELLOW  "m"
#define ANSISEQ_SETBG_BLUE    __ANSISEQ_SETBG_BLUE    "m"
#define ANSISEQ_SETBG_MAGENTA __ANSISEQ_SETBG_MAGENTA "m"
#define ANSISEQ_SETBG_CYAN    __ANSISEQ_SETBG_CYAN    "m"
#define ANSISEQ_SETBG_WHITE   __ANSISEQ_SETBG_WHITE   "m"

#define ANSISEQ_BRIGHT_BG(c)     ANSISEQ_BG_##c ";1"
#define ANSISEQ_BG256(n)         ";48;5;" #n
#define ANSISEQ_SETBRIGHT_BG(c)  ANSISEQ_ESC "[" ANSISEQ_BRIGHT_BG(c) "m"
#define ANSISEQ_SETBG256(n)      ANSISEQ_ESC "[" ANSISEQ_BG256(n) "m"
#define ANSISEQ_DYN_BRIGHT_BG    ANSISEQ_BRIGHT_BG(%d)
#define ANSISEQ_DYN_BG256        ANSISEQ_BG256(%d)
#define ANSISEQ_DYN_SETBRIGHT_BG ANSISEQ_SETBRIGHT_BG(%d)
#define ANSISEQ_DYN_SETBG256     ANSISEQ_SETBG256(%d)

#define ANSISEQ_BG_RGB(r, g, b)    ";48;2;"#r";"#g";"#b
#define ANSISEQ_SETBG_RGB(r, g, b)            \
  ANSISEQ_ESC "[" ANSISEQ_BG_RGB(r, g, b) "m"
#define ANSISEQ_DYN_BG_RGB         ANSISEQ_BG_RGB(%d, %d, %d)
#define ANSISEQ_DYN_SETBG_RGB      ANSISEQ_SETBG_RGB(%d, %d, %d)

#define ANSISEQ_BG_DEFAULT ANSISEQ_ESC "[49m" // Set the background color
                                              // to the default one
                                              // (i.e. reset background
                                              //  color only)

/* Text styles */
#define ANSISEQ_TXT_BLD ";1" // bold
#define ANSISEQ_TXT_DIM ";2" // dim/faint
#define ANSISEQ_TXT_ITL ";3" // italic
#define ANSISEQ_TXT_UNL ";4" // underline
#define ANSISEQ_TXT_BLK ";5" // blinking mode (idk what it does)
#define ANSISEQ_TXT_REV ";7" // reversed
#define ANSISEQ_TXT_HID ";8" // hidden/invisible
#define ANSISEQ_TXT_STK ";9" // strikethrough

#define ANSISEQ_SETTXT_BLD ANSISEQ_ESC "[" ANSISEQ_TXT_BLD "m"
#define ANSISEQ_SETTXT_DIM ANSISEQ_ESC "[" ANSISEQ_TXT_DIM "m"
#define ANSISEQ_SETTXT_ITL ANSISEQ_ESC "[" ANSISEQ_TXT_ITL "m"
#define ANSISEQ_SETTXT_UNL ANSISEQ_ESC "[" ANSISEQ_TXT_UNL "m"
#define ANSISEQ_SETTXT_BLK ANSISEQ_ESC "[" ANSISEQ_TXT_BLK "m"
#define ANSISEQ_SETTXT_REV ANSISEQ_ESC "[" ANSISEQ_TXT_REV "m"
#define ANSISEQ_SETTXT_HID ANSISEQ_ESC "[" ANSISEQ_TXT_HID "m"
#define ANSISEQ_SETTXT_STK ANSISEQ_ESC "[" ANSISEQ_TXT_STK "m"

#define ANSISEQ_GR_RESET   ANSISEQ_ESC "[" "0m"

#endif /* ANSISEQ_GRAPHICS_H */
