#include <stdio.h>

int main()
{
  int num, rev = 0, it;
  printf("Enter a number (num) => ", num);
  scanf("%d", &num);

  it = num;

  while (it != 0)
  {
    rev = (rev * 10) + (it % 10);
    it /= 10;
  }

  printf("%d is %s.\n", num, num == rev ? "a palindrome" : "not a palindrome");

  return 0;
}
