#include <stdio.h>

int main()
{
  int arr[50], l, max, min;

  printf("No of elements: ");
  scanf("%d", &l);

  for (int i = 0; i < l; i++)
  {
    printf("Elem (%d): ", i);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < l; i++)
  {
    if (i == 0)
    {
      max = arr[i];
      min = arr[i];
    }
    else
    {
      if (max < arr[i])
      {
        max = arr[i];
      }
      if (min > arr[i])
      {
        min = arr[i];
      }
    }
  }

  printf("Largest: %d, Smallest: %d\n", max, min);

  return 0;
}
