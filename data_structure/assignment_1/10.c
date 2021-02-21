#include <stdio.h>
#include <limits.h>

/**
 * Sort an array in ascending order with QuickSort
 * @param arr Pointer of the array to sort
 * @param len The length of the array
*/
void quick_sort_asc(int *arr, int len)
{
  int i, j, m, n, o;
  for (i = 0; i < len; i++)
  {
    m = arr[i], n = INT_MAX, o = i;
    for (j = i; j < len; j++)
    {
      if (n > arr[j])
      {
        n = arr[j];
        o = j;
      }
    }
    arr[i] = n;
    arr[o] = m;
  }
}

int main()
{
  int len, arr[100];
  printf("Enter length of the array: ");
  scanf("%d", &len);
  printf("Enter array elements: ");
  for (int i = 0; i < len; i++)
    scanf("%d", &arr[i]);
  // Sort the array
  quick_sort_asc(&arr, len);

  printf("Sorted array: ");
  for (int i = 0; i < len; i++)
    printf("%d ", arr[i]);

  return 0;
}
