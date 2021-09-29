#include <stdio.h>

int main()
{
  int x, y, n;
  printf("Enter 2 integers: ");
  scanf("%d %d", &x, &y);
  printf("Oparations:\n1. Addition, 2. Substraction, 3. Multiplication, 4. Division\n\nChoose an operation => ");
  scanf("%d", &n);

  switch (n)
  {
  case 1:
    printf("Addition:\n%d + %d = %d\n", x, y, x + y);
    break;
  case 2:
    printf("Substraction:\n%d - %d = %d\n", x, y, x - y);
    break;
  case 3:
    printf("Multiplication:\n%d x %d = %d\n", x, y, x * y);
    break;
  case 4:
    printf("Division:\n%d / %d = %d\n", x, y, x / y);
    break;
  default:
    printf("Invalid opration.\n");
    break;
  }

  return 0;
}
