#include <stdio.h>

int main()
{
  int a[50];
  int b, sum = 0;
  printf("Enter number of elements => ");
  scanf("%d", &b);

  // take input
  for (int i = 0; i < b; i++)
  {
    printf("Element %d => ", i);
    scanf("%d", &a[i]);
  }
  // print elements
  for (int i = 0; i < b; i++)
  {
    sum += a[i];
  }

  printf("Sum = %d\n", sum);

  return 0;
}
