#include <stdio.h>
#include <math.h>

int cubeOf(int val)
{
  int res = pow(val, 3);
  return res;
}

int main()
{
  int a, b;
  printf("Enter a number to find cube of: ");
  scanf("%d", &a);
  b = cubeOf(a);
  printf("Cube of %d is: %d\n", a, b);
  return 0;
}
