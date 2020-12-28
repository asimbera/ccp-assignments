#include <stdio.h>

int main()
{
  int a[50];
  int b, max, min;
  printf("Enter number of elements => ");
  scanf("%d", &b);

  // take input
  for (int i = 0; i < b; i++)
  {
    printf("Element %d => ", i);
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < b; i++)
  {
    if (i != 0)
    {
      if (max < a[i])
        max = a[i];
      if (min > a[i])
        min = a[i];
    }
    else
    {
      max = a[i];
      min = a[i];
    }
  }

  printf("Maximum: %d, Minimum: %d\n", max, min);

  return 0;
}
