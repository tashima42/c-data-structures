#include <stdio.h>

int main(void)
{
  int i, n, smallest;
  printf("\nEnter the number of elements on the array: ");
  scanf("%d", &n);

  int arr[n];

  for (i = 0; i < n; i++)
  {
    printf("\n arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }
  
  smallest = arr[0];
  printf("\n The array elements are: ");
  for (i = 0; i < n; i++)
  {
    if(arr[i] < smallest) smallest = arr[i];
    printf("\t %d", arr[i]);
  }
  printf("\nSmallest number on array: %d\n", smallest);

  return 0;
}
