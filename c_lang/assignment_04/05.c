#include <stdio.h>

int main()
{
  int a[50];
  int b, even = 0, odd = 0;
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
    if (a[i] % 2 == 0)
      even += 1;
    else
      odd += 1;
  }

  printf("Even: %d, Odd: %d\n", even, odd);

  return 0;
}
