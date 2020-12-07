#include <stdio.h>

int main()
{
  int a[] = {2, 10, 9, 7, 5};
  printf("%d\n", a); // address of the first element
  printf("%d\n", &a[0]); // address of the first element
  
  printf("%d\n", a[0]); // value of the first element
  printf("%d\n", *a); // value of the first element

  printf("%d\n", &a[3]); // address of the fourth element
  printf("%d\n", (a + 3)); //address of the fourth element

  printf("%d\n", a[3]); // value of the fourth element
  printf("%d\n", *(a + 3)); // value of the fourth element

  int *pa = a;
  /* 
  a++; // invalid
  pa++; // valid 
  */
  int i;
  for(i = 0; i < 5; i++)
  {
    printf("address [%d]: %d\n", i, &a[i]);
    printf("address [%d]: %d\n", i, (pa + i));

    printf("value [%d]: %d\n", i, pa[i]);
    printf("value [%d]: %d\n", i, *(a + i));
  }

  return 0;
}