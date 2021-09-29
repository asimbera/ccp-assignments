#include <stdio.h>
#include <math.h>

// check using trial division method
// prime = 1, not prime = 0
int IsPrime(int val)
{
  int sqrtOfVal = sqrt(val), prime = 1;
  for (int i = 2; i <= sqrtOfVal; i++)
  {
    if (val % i == 0)
    {
      prime = 0;
      break;
    }
  }

  return prime;
}

int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);

  printf("The number is %s.\n", IsPrime(a) ? "Prime" : "Not Prime");

  return 0;
}
