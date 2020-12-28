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
  printf("Negative Elements :\n");
  for (int i = 0; i < b; i++)
  {
    if (a[i] < 0)
      printf("Element %d => %d\n", i, a[i]);
  }

  return 0;
}
