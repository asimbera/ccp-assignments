#include <stdio.h>

int main()
{
  int i = 0, num, digits = 0;
  printf("Enter a number (num) => ", num);
  scanf("%d", &num);
  while (num != 0)
  {
    num /= 10;
    digits += 1;
  }

  printf("Number of digits = %d\n", digits);

  return 0;
}
