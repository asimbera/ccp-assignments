#include <stdio.h>

int isEvenOrOdd(int val)
{
  // even = 1, odd = 0
  return val % 2 == 0 ? 1 : 0;
}

int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);

  printf("The number is %s.\n", isEvenOrOdd(a) ? "Even" : "Odd");

  return 0;
}
