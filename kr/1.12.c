// copyright 2013 <VitoLau i@isayme.com>
/**
 * 每行一个单词打印输入,多个空格只输出一个
 */
#include <stdio.h>

#ifndef IN
#define IN 1
#endif
#ifndef OUT
#define OUT 0
#endif

int main(int argc, char **argv) {
  int c, status;
  printf("每行一个单词打印输入,多个空格只输出一个,请输入\n");
  status = 0;
  while ((c = getchar()) != '\n') {
    if (c == ' ') {
      if (status == IN) {
        printf("\n");
      }
      status = OUT;
    } else {
      status = IN;
      printf("%c", c);
    }
  }
  printf("\n");
  return 0;
}
