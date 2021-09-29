#include <stdio.h>

int main()
{
  int n, arr[50], *p;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter elements: ");

  p = arr;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", p);
    p++;
  }

  p = arr;

  printf("Elements: ");

  for (int i = 0; i < n; i++)
  {
    printf("%d ", *p);
    p++;
  }

  return 0;
}
