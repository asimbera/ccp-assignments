#include <stdio.h>
#include <math.h>

int isArmstrongNumber(int val)
{
  int i = val, total = 0;
  while (i > 0)
  {
    total += pow(i % 10, 3);
    i = i / 10;
  }
  return total == val ? 1 : 0;
}

void enumerateArmstrong(int lim)
{
  printf("Armstrong Numbers: \n");
  for (int i = 1; i <= lim; i++)
  {
    if (isArmstrongNumber(i))
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

  enumerateArmstrong(a);

  return 0;
}
