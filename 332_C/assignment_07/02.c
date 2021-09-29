#include <stdio.h>

int main()
{
  int a, b, *c, *d, *temp;
  printf("Enter 2 numbers: ");
  scanf("%d %d", &a, &b);
  c = &a;
  d = &b;

  // Swap
  temp = c;
  c = d;
  d = temp;

  printf("After swap: %d %d\n", *c, *d);

  return 0;
}
