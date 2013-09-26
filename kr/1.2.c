/**
 * 做个实验,当 printf 函数的参数字符串中包含\c(其中 c 是上面的转义字符序列中未曾列出的
 * 某一个字符)时,观察一下会出现什么情况
 */
#include <stdio.h>
int main() {
  printf("helloworld\n");
  return 0;
}
// \c is not a available char
