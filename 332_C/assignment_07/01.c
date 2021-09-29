#include <stdio.h>

int main()
{
  int a, b, *c, *d;
  printf("Enter 2 numbers: ");
  scanf("%d %d", &a, &b);
  c = &a;
  d = &b;

  printf("Result: %d + %d = %d\n", *c, *d, *c + *d);

  return 0;
}
