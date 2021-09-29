#include <stdio.h>

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  printf("%d is %s.\n", n, (n & 1) ? "Odd" : "Even");

  return 0;
}
