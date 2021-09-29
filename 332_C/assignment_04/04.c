#include <stdio.h>
#include <limits.h>

int main()
{
  int a[50];
  int b, max = INT_MIN, min = INT_MAX;
  printf("Enter number of elements => ");
  scanf("%d", &b);

  // take input
  printf("Enter array Elements: ");
  for (int i = 0; i < b; i++)
    scanf("%d", &a[i]);

  for (int i = 0; i < b; i++)
  {
    if (max < a[i])
      max = a[i];
    if (min > a[i])
      min = a[i];
  }

  printf("Maximum: %d, Minimum: %d\n", max, min);

  return 0;
}
