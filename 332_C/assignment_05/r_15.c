#include <stdio.h>
#include <limits.h>

// flag 0 = minimum, 1 = maximum
int minMax(int arr[], int length, int cur, int last, int flag)
{
  if (cur >= length)
    return last;
  int check = flag ? last < arr[cur] : last > arr[cur];
  return minMax(arr, length, cur + 1, check ? arr[cur] : last, flag);
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

  printf("Minimum: %d\n", minMax(a, l, 0, INT_MAX, 0));
  printf("Maximum: %d\n", minMax(a, l, 0, INT_MIN, 1));

  return 0;
}
