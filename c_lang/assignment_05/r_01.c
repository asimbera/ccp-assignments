#include <stdio.h>

/**
 * Recurring function to find power of given integer.
 * @param val current value
 * @param init initial integer to calculate on
 * @param pow decreasing power
 */
int powOf(int val, int init, int pow)
{
  if (pow == 0)
    return val;
  return powOf(val * init, init, pow - 1);
}

int main()
{
  int a, b;
  printf("Enter a number to find power of: ");
  scanf("%d", &a);
  printf("Enter power: ");
  scanf("%d", &b);

  printf("%d to the power %d is %d.\n", a, b, powOf(1, a, b));
  return 0;
}
