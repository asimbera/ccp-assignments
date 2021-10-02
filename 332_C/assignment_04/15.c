#include <stdio.h>

int main()
{
  int arr[100], n, r, temp;
  printf("Enter no elements: ");
  scanf("%d", &n);
  printf("Enter array elements: ");
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  printf("Enter rotation times: ");
  scanf("%d", &r);
  for (int i = 0; i < r; i++)
  {
    temp = arr[0];
    for (int j = 0; j < n; j++)
      arr[j] = arr[j + 1];
    arr[n - 1] = temp;
  }
  printf("Result: ");
  for (int j = 0; j < n; j++)
    printf("%d ", arr[j]);
  return 0;
}
