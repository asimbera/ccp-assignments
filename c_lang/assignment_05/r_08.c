#include <stdio.h>

/**
 * Sum of the digits of the given number.
 * @param val current integer
 * @param sum sum upto digits not in [val]
 */
int sumOfDigits(int val, int sum)
{
  if (val == 0)
    return sum;
  return sumOfDigits(val / 10, sum + (val % 10));
}

int main()
{
  int a;
  printf("Enter a number to sum digits of: ");
  scanf("%d", &a);
  printf("Sum of the digits: %d.\n", sumOfDigits(a, 0));
  return 0;
}
