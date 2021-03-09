#include <stdio.h>
#include <limits.h>

/**
 * Sort an array in ascending order with QuickSort
 * @param arr Pointer of the array to sort
 * @param len The length of the array
*/
void quick_sort_asc(int *arr, int len)
{
  int itr, next, temp, n, o;
  for (itr = 0; itr < len; itr++)
  {
    temp = arr[itr], n = INT_MAX, o = itr;
    for (next = itr; next < len; next++)
    {
      if (n > arr[next])
      {
        n = arr[next];
        o = next;
      }
    }
    arr[itr] = n;
    arr[o] = temp;
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
