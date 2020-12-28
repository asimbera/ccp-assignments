#include <stdio.h>

int main()
{
  int a[50];
  int b, n = 0;
  printf("Enter number of elements => ");
  scanf("%d", &b);

  // take input
  for (int i = 0; i < b; i++)
  {
    printf("Element %d => ", i);
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < b; i++)
  {
    if (a[i] < 0)
      n += 1;
  }

  printf("No of Negetive Elements: %d \n", n);

  return 0;
}
