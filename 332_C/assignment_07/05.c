#include <stdio.h>

int main()
{
  int n, arr1[50], arr2[50], *p, *q, *temp, i;
  printf("Enter number of elements: ");
  scanf("%d", &n);

  p = arr1;
  q = arr2;
  printf("Enter elements for 1st array: ");
  for (i = 0; i < n; i++)
    scanf("%d", p++);
  printf("Enter elements for 2nd array: ");
  for (i = 0; i < n; i++)
    scanf("%d", q++);

  // swap arrays
  p = arr1;
  q = arr2;
  for (i = 0; i < n; i++)
  {
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    p++;
    q++;
  }

  printf("After Swapping: \n");
  printf("1st Array:");
  for (i = 0; i < n; i++)
    printf("%d ", arr1[i]);

  printf("\n2nd Array:");
  for (i = 0; i < n; i++)
    printf("%d ", arr2[i]);

  return 0;
}
