#include <stdio.h>

/**
 * Find factorial of the given number.
 * @param cur current integer
 * @param val factorial upto digits not in [cur]
 */
int factorialOf(int cur, int val)
{
  if (cur <= 1)
    return val;
  return factorialOf(cur - 1, val * cur);
}

int main()
{
  int a;
  printf("Enter a number to find factorial of: ");
  scanf("%d", &a);
  printf("Factorial of %d is %d.\n", a, factorialOf(a, 1));
  return 0;
}
