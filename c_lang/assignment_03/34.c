#include <stdio.h>

int main()
{
  int n, it, digit, product, sum, i, j;
  printf("Enter upper limit: ");
  scanf("%d", &n);

  printf("Strong numbers between 1 and %d : \n", n);
  for (i = 1; i <= n; i++)
  {
    it = i;
    sum = 0; // Reset sum
    while (it != 0)
    {
      digit = it % 10; // Last digit
      product = 1;     // Reset product
      for (j = digit; j != 0; j--)
        product *= j;
      sum += product;
      it /= 10;
    }
    if (i == sum)
      printf("%d, ", i);
  }

  printf("\n");

  return 0;
}
