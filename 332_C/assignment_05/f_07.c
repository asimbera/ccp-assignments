#include <stdio.h>

int isPerfect(int val)
{
  int total = 0;
  for (int i = 1; i < val; i++)
  {
    if (val % i == 0)
      total += i;
  }

  return total == val ? 1 : 0;
}

int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);

  printf("The number is %s.\n", isPerfect(a) ? "Perfect" : "Not Perfect");

  return 0;
}
