#include <stdio.h>

int main()
{
  int a, b;
  printf("Enter 2 numbers: ");
  scanf("%d %d", &a, &b);

  // Swap using bitwise operator
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  printf("After swaping: a = %d, b = %d\n", a, b);
  return 0;
}
