// https://www.w3resource.com/c-programming-exercises/pointer/index.php
#include <stdio.h>

int main()
{
  int m = 300, z;
  double fx = 300.600006;
  int *cht = &z;

  printf("Pointer : Demonstrate the use of & and * operator :\n");
  printf("--------------------------------------------------------\n");
  printf("m = %d\n", m);
  printf("fx = %f\n", fx);
  printf("cht = z\n");
  printf("\n");
  printf("Using & operator :\n");
  printf("-----------------------\n");
  printf("address of m = %d \n", &m);
  printf("address of fx = %d\n", &fx);
  printf("address of cht = %d\n", &cht);
  printf("\n");
  printf("Using & and * operator : \n");
  printf("----------------------------- \n");
  printf("value at address of m = %d \n", m);
  printf("value at address of fx = %f\n", fx);
  printf("value at address of cht = z\n");
  printf("\n");
  printf("Using only pointer variable :\n");
  printf("----------------------------------\n");
  printf("address of m = %d\n", &m);
  printf("address of fx = %d\n", &fx);
  printf("address of cht = %d\n", &cht);
  printf("\n");
  printf("Using only pointer operator : \n");
  printf("----------------------------------\n");
  printf("value at address of m = %d\n", m);
  printf("value at address of fx= %f\n", fx);
  printf("value at address of fx= z\n");
}
