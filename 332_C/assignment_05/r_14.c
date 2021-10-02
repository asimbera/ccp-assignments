#include <stdio.h>

int sumOfElements(int arr[], int length, int cur, int sum)
{
  if (cur > length)
    return sum;
  return sumOfElements(arr, length, cur + 1, sum + cur);
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

  printf("Sum of Elements: %d\n", sumOfElements(a, l, 0, 0));

  return 0;
}
