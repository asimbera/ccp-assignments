#include <stdio.h>
#include <limits.h>

/**
 * Sort an array with QuickSort
 * @param arr Pointer of the array to sort
 * @param len The length of the array
 * @param order Sorting order, 0 for ascending and 1 for descending
*/
void quick_sort(int *arr, int len, int order)
{
  int i, j, m, n, o;
  for (i = 0; i < len; i++)
  {
    m = arr[i], n = !order ? INT_MAX : INT_MIN, o = i;
    for (j = i; j < len; j++)
    {
      if (!order ? n > arr[j] : n < arr[j])
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
  quick_sort(&arr, len, 0);
  printf("2nd largest: %d, 2nd smallest: %d", arr[len - 2], arr[1]);

  return 0;
}
