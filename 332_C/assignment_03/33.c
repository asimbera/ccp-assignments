#include <stdio.h>

int main()
{
  int num, it, digit, product, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &num);

  it = num;
  while (it != 0)
  {
    digit = it % 10; // Last digit
    product = 1;     // Reset product
    for (int i = digit; i != 0; i--)
      product *= i;
    sum += product;

    it /= 10;
  }

  printf("%d %s a strong nummber.\n", num, num == sum ? "is" : "is not");

  return 0;
}
