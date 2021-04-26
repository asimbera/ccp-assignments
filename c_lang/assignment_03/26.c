#include <stdio.h>

int main()
{
  int n, prime_f;
  printf("Enter a number (n) => ");
  scanf("%d", &n);
  printf("All prime numbers between 1 to %d : \n", n);

  for (int i = 1; i <= n; i++)
  {
    prime_f = 1;
    for (int j = 2; j <= n / 2; j++)
    {
      if (i % j == 0)
        prime_f = 0;
    }
    if (prime_f == 1)
      printf("%d ", i);
  }

  printf("\n");
  return 0;
}
