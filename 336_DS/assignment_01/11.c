#include <stdio.h>
#include <limits.h>

int main()
{
  int array[50], length;
  printf("Array length: ");
  scanf("%d", &length);

  for (int i = 0; i < length; i++)
    scanf("%d", &array[i]);

  // Selectionsort
  for (int i = 0; i < length; i++)
  {
    int largest = INT_MIN, largest_idx;
    for (int j = i; j < length; j++)
    {
      if (array[j] > largest)
      {
        largest = array[j];
        largest_idx = j;
      }
    }
    // Swap
    int temp = array[i];
    array[i] = array[largest_idx];
    array[largest_idx] = temp;
  }

  for (int i = 0; i < length; i++)
    printf("%d ", array[i]);

  return 0;
}
