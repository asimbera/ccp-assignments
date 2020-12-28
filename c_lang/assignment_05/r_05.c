#include <stdio.h>

/**
 * Find sum upto integer [lim].
 * @param lim upper limit
 * @param cur current integer
 * @param sum sum of numbers upto [cur]
 * @param type flag of odd = 0, even = 1
*/
int sumUpto(int lim, int cur, int sum, int type)
{
  if (cur > lim)
    return sum;

  int rule = type ? cur % 2 == 0 : cur % 2 != 0;

  return rule ? sumUpto(lim, cur + 1, sum + cur, type) : sumUpto(lim, cur + 1, sum, type);
}

int main()
{
  int a;
  printf("Enter number to sum upto: ");
  scanf("%d", &a);
  printf("Sum of odd numbers upto %d: %d\n", a, sumUpto(a, 1, 0, 0));
  printf("Sum of even numbers upto %d: %d\n", a, sumUpto(a, 1, 0, 1));
  return 0;
}
