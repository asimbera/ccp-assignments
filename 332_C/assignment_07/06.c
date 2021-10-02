#include <stdio.h>

int main()
{
  int n, arr[50], *p, i;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter elements: ");

  for (i = 0; i < n; i++)
    scanf("%d", arr + i);

  p = arr + (n - 1);
  printf("Reversed Array: ");
  for (i = n; i > 0; i-- && p--)
    printf("%d ", *p);

  return 0;
}
