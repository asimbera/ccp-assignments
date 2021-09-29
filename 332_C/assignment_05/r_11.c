#include <stdio.h>

/**
 * Find the greatest common divisor of two numbers.
 * @param first first number
 * @param second second number
 * @param last last found common divisor
 * @param cur current iterator
*/
int findGCD(int first, int second, int last, int cur)
{
  int min = first < second ? first : second;
  if (cur > min)
    return last;
  int common = 0;
  if (first % cur == 0 && second % cur == 0)
    common = cur;
  return findGCD(first, second, common ? common : last, cur + 1);
}

int main()
{
  int a, b;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
  printf("GCD of %d and %d is %d.\n", a, b, findGCD(a, b, 1, 1));
  return 0;
}
