#include <stdio.h>

int main()
{
  char c = 'A';
  char *pc = &c;
  double d = 5.34;
  double *pd1, *pd2;

  printf("%c\n", c);
  char b = *pc;
  *pc = 'B';

  printf("%c\n", c);
  printf("%c\n", b);



  return 0;
}