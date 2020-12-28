#include <stdio.h>

int main()
{
  int a[50], b[50];
  int l;
  printf("Enter number of elements => ");
  scanf("%d", &l);

  // take input
  for (int i = 0; i < l; i++)
  {
    printf("Element %d => ", i);
    scanf("%d", &a[i]);
  }

  // reverse the array
  for (int i = l - 1; i >= 0; i--)
  {
    b[l - i - 1] = a[i];
  }

  // print elements
  printf("Elements :\n");
  for (int i = 0; i < l; i++)
  {
    printf("%d ", b[i]);
  }

  return 0;
}
