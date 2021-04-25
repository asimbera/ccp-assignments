#include <stdio.h>

// FIXME: [fac] might be out of range for int type.
int main()
{
  int num, fac = 1;
  printf("Enter a number (num) => ");
  scanf("%d", &num);

  for (int i = num; i >= 1; i--)
    fac *= i;

  printf("Factorial of %d = %d\n", num, fac);

  return 0;
}
