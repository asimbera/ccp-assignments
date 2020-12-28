#include <stdio.h>
#include <math.h>

// Prime checking using Sieve of Eratosthenes
void enumeratePrime(int lim)
{
  int flags[lim];
  for (int i = 0; i < lim; i++)
    flags[i] = 1;
  for (int i = 2; i < sqrt(lim); i++)
  {
    if (flags[i])
    {
      int j = pow(i, 2);
      while (j < lim)
      {
        flags[j] = 0;
        j += i;
      }
    }
  }

  for (int i = 2; i < lim; i++)
  {
    if (flags[i])
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

  enumeratePrime(a);

  return 0;
}
