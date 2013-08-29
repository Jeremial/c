#include <stdio.h>
#ifndef IN
#define IN 1
#endif
#ifndef OUT
#define OUT 0
#endif
int main(int argc, char const *argv[]) {
  int c, state = OUT;
  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      putchar(c);
      state = IN;
    } else if (c == ' ' && state == IN) {
      putchar(c);
      state = OUT;
    }
  }
  putchar('\n');
  return 0;
}
//the result is right :-)