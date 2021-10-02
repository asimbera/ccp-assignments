#include <stdio.h>

int main()
{
  int n, f = 2;
  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Prime Factors => ");
  while (n > 1)
  {
    if (n % f == 0)
    {
      printf("%d ", f);
      n /= f;
    }
    else
      f += 1;
  }

  printf("\n");

  return 0;
}
