/**
 * copyright 2013
 */
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, len[12], c, m;
  for (i = 0; i < 11; i++) {
    len[i] = 0;
  }
  while ((c = getchar()) != '\n') {
    if (c >= '0' && c <= '9') {
      len[c - '0']++;
    } else if (c == ' ' || c == '\t' || c == '\b') {
      len[10]++;
    } else {
      len[11]++;
    }
  }

  for (i = 0; i < 11; i++) {
    printf("%d: ", i);
    for (m = 0; m < len[i]; m++) {
      printf("#");
    }
    printf("\n");
  }
  printf("white space: ");
  for (m = 0; m < len[10]; m++) {
    printf("#");
  }
  printf("\nothers: ");
  for (m = 0; m < len[11]; m++) {
    printf("#");
  }
  printf("\n");
  return 0;
}