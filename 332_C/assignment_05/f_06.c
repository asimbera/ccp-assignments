#include <stdio.h>
#include <math.h>

int isArmstrong(int val)
{
  // int digits = 0;
  int i = val, total = 0;
  while (i > 0)
  {
    // digits++;
    total += pow(i % 10, 3);
    i = i / 10;
  }
  return total == val ? 1 : 0;
}

int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);

  printf("The number is %s.\n", isArmstrong(a) ? "Armstrong" : "Not Armstrong");

  return 0;
}
