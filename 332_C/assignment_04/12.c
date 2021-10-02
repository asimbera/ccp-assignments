#include <stdio.h>

int main()
{
  int arr[100], arr_even[50], arr_odd[50], arr_len, p = 0, q = 0;

  printf("No of elements: ");
  scanf("%d", &arr_len);
  printf("Enter array elements: ");
  for (int i = 0; i < arr_len; i++)
    scanf("%d", &arr[i]);

  for (int i = 0; i < arr_len; i++)
  {
    if (arr[i] % 2 == 0)
      arr_even[p++] = arr[i];
    else
      arr_odd[q++] = arr[i];
  }

  printf("\nEven array: ");
  for (int i = 0; i < p; i++)
    printf("%d ", arr_even[i]);

  printf("\nOdd array: ");
  for (int i = 0; i < q; i++)
    printf("%d ", arr_odd[i]);

  return 0;
}
