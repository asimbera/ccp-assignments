#include <stdio.h>

int main()
{
  int a[50];
  int b;
  printf("Enter number of elements => ");
  scanf("%d", &b);

  // take input
  for (int i = 0; i < b; i++)
  {
    printf("Element %d => ", i);
    scanf("%d", &a[i]);
  }
  // print elements
  printf("Elements :\n");
  for (int i = 0; i < b; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}
