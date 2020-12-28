#include <stdio.h>

/**
 * Find the LCM of two numbers.
 * @param first first number
 * @param second second number
 * @param cur current iterator
*/
int findLCM(int first, int second, int cur)
{
  if (cur % first == 0 && cur % second == 0)
    return cur;
  return findLCM(first, second, cur + 1);
}

int main()
{
  int a, b;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
  printf("LCM of %d and %d is %d.\n", a, b, findLCM(a, b, a > b ? a : b));
  return 0;
}
