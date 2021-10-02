#include <stdio.h>

void printArray(int arr[], int length, int cur)
{
  if (cur >= length)
    return;
  printf("%d ", arr[cur]);
  return printArray(arr, length, cur + 1);
}

int main()
{
  int a[100], l;

  printf("Enter array length: ");
  scanf("%d", &l);

  for (int i = 0; i < l; i++)
  {
    printf("(%d) > ", i);
    scanf("%d", &a[i]);
  }

  printf("Elements: \n");
  printArray(a, l, 0);

  return 0;
}
