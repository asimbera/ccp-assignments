#include <stdio.h>

int main()
{
  int arr[50], n, t, i;
  printf("Enter array length: ");
  scanf("%d", &n);
  printf("Enter array elements: ");
  for (i = 0; i < n; i++)
    scanf("%d", arr + i);

  printf("Enter element to delete: ");
  scanf("%d", &t);

  // Delete operation
  for (i = 0; i < n; i++)
  {
    if (arr[i] == t)
      break;
  }
  // Shift
  for (; i < n; i++)
    arr[i] = arr[i + 1];
  n -= 1; // Reduce array length by 1.

  printf("After delete: \n");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}
