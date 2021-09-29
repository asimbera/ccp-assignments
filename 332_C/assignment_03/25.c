#include <stdio.h>

int main()
{
  int num, prime_f, i = 1;
  printf("Enter a number (num): ");
  scanf("%d", &num);

  for (i = 2; i <= num / 2; i++)
  {
    if (num % i == 0)
      prime_f = 0;
  }
  printf("%d is %s prime number.\n", num, prime_f == 0 ? "not a" : "a");

  return 0;
}
