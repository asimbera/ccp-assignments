#include <stdio.h>

/**
 * Find sum upto integer [lim].
 * @param lim upper limit
 * @param cur current integer
 * @param sum sum of numbers upto [cur]
*/
int sumUpto(int lim, int cur, int sum)
{
  if (cur > lim)
    return sum;
  return sumUpto(lim, cur + 1, sum + cur);
}

int main()
{
  int a;
  printf("Enter number to sum upto: ");
  scanf("%d", &a);
  printf("Sum of numbers upto %d: %d\n", a, sumUpto(a, 1, 0));
  return 0;
}
