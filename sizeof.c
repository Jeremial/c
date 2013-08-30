// Copyright 2013 <Copyright VitoLau>
#include <stdio.h>
int main(int argc, char const *argv[]) {
  printf("the size of commonly used variable is \n");
  printf("char : %d\n", sizeof(char));
  printf("short : %d\n", sizeof(short));
  printf("short int : %d\n", sizeof(short int));
  printf("int : %d\n", sizeof(int));
  printf("long : %d\n", sizeof(long));
  printf("long int : %d\n", sizeof(long int));
  printf("long long : %d\n", sizeof(long long));
  printf("double : %d\n", sizeof(double));
  printf("long double : %d\n", sizeof(long double));
  printf("float : %d\n", sizeof(float));

  switch (1) {
    case '1':
      printf('a');
    case '2':
      printf("%s\n", 'a');
  }
  return 0;
}
/**
 * in windows 7 Cfree5.0
 * the size of commonly used variable is
 * char : 1
 * short : 2
 * short int : 2
 * int : 4
 * long : 4
 * long int : 4
 * long long : 8
 * double :8
 * long double : 12
 * float : 4
 */
/**
 * in Linux(CentOS6.3 gcc)
 * the size of commonly used variable is
 * char : 1
 * short : 2
 * short int : 2
 * int : 4
 * long : 4
 * long int : 4
 * long long : 8
 * double : 8
 * long double : 12
 * float : 4
 */
// if sizeof a string ,the sizeof is the length+1
// e.g. sizeof("test")=5
// e.g. strlen("test")=4 (include string.h)
