#include <stdio.h>

int main()
{
  int i = 1, n;
  printf("Enter number for table (n) => ", n);
  scanf("%d", &n);
  printf("Multiplication Table :\n");
  while (i <= 10)
  {
    printf("%d x %d = %d, ", n, i, n * i);
    i++;
  }
  printf("\n");

  return 0;
}
