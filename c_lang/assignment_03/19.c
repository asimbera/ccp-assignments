#include <stdio.h>

int main()
{
  int num, rev = 0;
  printf("Enter a number: ");
  scanf("%d", &num);

  while (num != 0)
  {
    rev = (rev * 10) + (num % 10);
    num /= 10;
  }

  while (rev != 0)
  {
    switch (rev % 10)
    {
    case 1:
      printf("One ");
      break;
    case 2:
      printf("Two ");
      break;
    case 3:
      printf("Three ");
      break;
    case 4:
      printf("Four ");
      break;
    case 5:
      printf("Five ");
      break;
    case 6:
      printf("Six ");
      break;
    case 7:
      printf("Seven ");
      break;
    case 8:
      printf("Eight ");
      break;
    case 9:
      printf("Nine ");
      break;
    case 0:
      printf("Zero ");
      break;
    }

    rev /= 10;
  }

  printf("\n");

  return 0;
}
