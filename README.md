# c-ansi-sequences
The ANSI escape sequences used for terminal display control wrapped in macros. Everything is very simple, you can pretty much understand what each macro does when looking at the `#define`s and comments. If you are intierested enough into this and want more documentation, open an issue and hope it'll reach me.

## Examples
```c
#include <stdio.h>
#include <c-ansi-sequences/graphics.h>

int main(void)
{
  printf(ANSIQ_SETFG_GREEN"Hello, world!"ANSIQ_GR_RESET"\n");
  return 0;
}
```
The code above will print `Hello, world!`in green text color. If you want to compose more styles together, do this:
```c
printf(ANSIQ_GR_SEQ(ANSIQ_FG_WHITE ANSIQ_BG_BLUE
                      ANSIQ_TXT_BLD ANSIQ_TXT_ITL)
       "White, bold, italic text on blue background"ANSIQ_GR_RESET"\n");
```
If you want to use the same style composition in multiple places, you csn wrap that in a macro:
```c
#define WARNING(text)                               \
  ANSIQ_GR_SEQ(ANSIQ_FG_YELLOW ANSIQ_TXT_UNL) \
  text ANSIQ_GR_RESET
  printf(WARNING("This is a warning")"\n");
```
