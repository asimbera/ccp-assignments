#include <stdio.h>

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  switch (n > 0)
  {
  case 1:
    printf("Positive\n");
    break;
  default:
    printf("Negative or Zero\n");
    break;
  }

  return 0;
}
