#include <stdio.h>
#include <limits.h>

int main()
{
  int arr[50], l, max = INT_MIN, s_max = INT_MIN;

  printf("No of elements: ");
  scanf("%d", &l);

  for (int i = 0; i < l; i++)
  {
    printf("Elem (%d): ", i);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < l; i++)
  {
    if (max < arr[i])
      max = arr[i];
  }

  for (int i = 0; i < l; i++)
  {
    if (s_max < arr[i] && max != arr[i])
      s_max = arr[i];
  }

  printf("Largest: %d, 2nd Largest: %d\n", max, s_max);

  return 0;
}
