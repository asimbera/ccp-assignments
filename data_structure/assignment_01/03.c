#include <stdio.h>
#include <limits.h>

int main()
{
  int arr[50], l, max = INT_MIN, min = INT_MAX;

  printf("No of elements: ");
  scanf("%d", &l);

  for (int i = 0; i < l; i++)
    scanf("%d", &arr[i]);

  for (int i = 0; i < l; i++)
  {
    if (max < arr[i])
      max = arr[i];
    if (min > arr[i])
      min = arr[i];
  }

  printf("Largest: %d, Smallest: %d\n", max, min);

  return 0;
}
