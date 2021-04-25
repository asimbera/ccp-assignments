#include <stdio.h>

int main()
{
  int num, reverse = 0, remain;
  printf("Enter a number => ");
  scanf("%d", &num);

  while (num != 0)
  {
    reverse = (reverse * 10) + (num % 10);
    num /= 10;
  }

  printf("Reversed =>  %d\n", reverse);

  return 0;
}
