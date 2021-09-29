#include <stdio.h>

int main()
{
  int num, remain, sum = 0;
  printf("Enter a number => ");
  scanf("%d", &num);
  while (num != 0)
  {
    remain = num % 10;
    sum += remain;
    num /= 10;
  }

  printf("Sum of digits = %d\n", sum);

  return 0;
}
