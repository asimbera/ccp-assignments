#include <stdio.h>

int main()
{
  int x, y, i, m;
  printf("Enter 2 numbers: ");
  scanf("%d %d", &x, &y);
  m = x > y ? y : x;

  for (i = m; i >= 1; i--)
  {
    if (x % i == 0 && y % i == 0)
      break;
  }

  printf("GCD: %d\n", i);

  return 0;
}
