#include <stdio.h>

int main()
{
  int arr[100], evens[50], odds[50],
      // l = first array length, p = pointer of evens, q = pointer of odds
      l, p = 0, q = 0;

  printf("No of elements: ");
  scanf("%d", &l);
  for (int i = 0; i < l; i++)
    scanf("%d", &arr[i]);

  for (int i = 0; i < l; i++)
  {
    if (arr[i] % 2 == 0)
      evens[p++] = arr[i];
    else
      odds[q++] = arr[i];
  }

  printf("\nEven array: \n");
  for (int i = 0; i < p; i++)
    printf("%d ", evens[i]);
  printf("\nOdd array: \n");
  for (int i = 0; i < q; i++)
    printf("%d ", odds[i]);

  return 0;
}
