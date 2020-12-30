#include <stdio.h>
#include <limits.h>

int main()
{
  int a[50];
  int l, order;
  printf("No of elements: ");
  scanf("%d", &l);

  // take input
  printf("Enter array elements: ");
  for (int i = 0; i < l; i++)
    scanf("%d", &a[i]);

  printf("Sort Order (0 = ascending, 1 = descending): ");
  scanf(" %d", &order);

  // selection sort
  for (int i = 0; i < l; i++)
  {
    int m = a[i], n = !order ? INT_MAX : INT_MIN, o = i;
    for (int j = i; j < l; j++)
    {
      if (!order ? n > a[j] : n < a[j])
      {
        n = a[j];
        o = j;
      }
    }
    a[i] = n;
    a[o] = m;
  }

  printf("Sorted Array: ");
  for (int i = 0; i < l; i++)
    printf("%d ", a[i]);

  return 0;
}
