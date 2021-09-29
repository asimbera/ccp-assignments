#include <stdio.h>

int main()
{
  int n, arr1[50], arr2[50], *p;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter elements: ");

  p = arr1;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", p);
    p++;
  }

  p = arr1;
  for (int i = 0; i < n; i++)
  {
    arr2[i] = *p;
    p++;
  }

  printf("Elements of second array: ");

  for (int i = 0; i < n; i++)
    printf("%d ", arr2[i]);

  return 0;
}
