#include <stdio.h>

/**
 * Print all numbers between 1 and [lim]. Both included.
 * @param lim upper limit
 * @param cur current number
*/
void enumerateNaturals(int lim, int cur)
{
  if (cur > lim)
    return;
  printf("%d ", cur);
  return enumerateNaturals(lim, cur + 1);
}

int main()
{
  int a;
  printf("Enter natural number to print upto: ");
  scanf("%d", &a);
  enumerateNaturals(a, 1);
  return 0;
}
