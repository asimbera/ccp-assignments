#include <stdio.h>

int main()
{
  int i = 1, n;
  printf("Enter target (n) => ");
  scanf("%d", &n);

  while (i <= n)
    printf("%d ", i++);
  printf("\n");

  return 0;
}
