#include <stdio.h>
#include <math.h>

int isStrongNumber(int val)
{
  int i = val, total = 0;
  while (i > 0)
  {
    // using tgamma as factorial alternative
    // from math.h
    total += tgamma((i % 10) + 1);
    i = i / 10;
  }
  return total == val ? 1 : 0;
}

void enumerateStrong(int lim)
{
  printf("Strong Numbers: \n");
  for (int i = 1; i <= lim; i++)
  {
    if (isStrongNumber(i))
    {
      printf("%d ", i);
    }
  }
}

int main()
{
  int a;
  printf("Enter upper limit: ");
  scanf("%d", &a);

  enumerateStrong(a);

  return 0;
}
