#include <stdio.h>

int minMaxOf(int a, int b, int flag)
{
  // flag: 0 = Min, 1 = Max
  if (flag)
    return a > b ? a : b;
  return a > b ? b : a;
}

int main()
{
  int a, b;
  printf("Enter 2 Numbers: ");
  scanf("%d", &a);
  scanf("%d", &b);
  printf("Max: %d, Min: %d\n", minMaxOf(a, b, 1), minMaxOf(a, b, 0));
}
