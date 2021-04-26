#include <stdio.h>

int main()
{
  int num, comp = 0;
  printf("Enter a number: ");
  scanf("%d", &num);

  for (int i = 1; i < num; i++)
  {
    if (num % i == 0)
      comp += i;
  }

  printf("%d %s a perfect number.\n", num, num == comp ? "is" : "is not");

  return 0;
}
