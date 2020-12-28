#include <stdio.h>

int main()
{
  int a[50], b[50];
  int c;
  printf("Enter number of elements (array a) => ");
  scanf("%d", &c);

  // take input
  for (int i = 0; i < c; i++)
  {
    printf("Element %d => ", i);
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < c; i++)
  {
    b[i] = a[i];
  }
  printf("Elements of array b => ");
  for (int i = 0; i < c; i++)
  {
    printf("%d ", b[i]);
  }
  printf("\n");

  return 0;
}
