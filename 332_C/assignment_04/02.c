#include <stdio.h>

int main()
{
  int a[50];
  int b;
  printf("Enter number of elements => ");
  scanf("%d", &b);

  // take input
  printf("Enter array Elements: ");
  for (int i = 0; i < b; i++)
    scanf("%d", &a[i]);
  // print elements
  printf("Negative Elements: ");
  for (int i = 0; i < b; i++)
  {
    if (a[i] < 0)
      printf("%d ", a[i]);
  }

  return 0;
}
