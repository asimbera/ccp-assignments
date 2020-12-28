#include <stdio.h>
#include <math.h>

int isPerfectNumber(int val)
{
  int total = 0;
  for (int i = 1; i < val; i++)
  {
    if (val % i == 0)
      total += i;
  }

  return total == val ? 1 : 0;
}

void enumeratePerfect(int lim)
{
  printf("Armstrong Numbers: \n");
  for (int i = 1; i <= lim; i++)
  {
    if (isPerfectNumber(i))
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

  enumeratePerfect(a);

  return 0;
}
