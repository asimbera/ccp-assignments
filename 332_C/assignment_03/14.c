#include <stdio.h>

int main()
{
  int i = 0, num, last;
  printf("Enter a number (num) => ", num);
  scanf("%d", &num);

  last = num % 10;

  while (num != 0)
  {
    if (num < 10)
      break;
    num /= 10;
  }

  printf("First digit = %d\n", num);
  printf("Last digit = %d\n", last);

  return 0;
}
