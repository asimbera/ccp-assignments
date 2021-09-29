#include <stdio.h>

/**
 * Print all even or odd numbers between 1 and [lim]. Both included.
 * @param lim upper limit
 * @param cur current number
 * @param type flag for odd = 0, even = 1
*/
void enumerateEvenOrOdd(int lim, int cur, int type)
{
  if (cur > lim)
    return;
  if (type)
  {
    if (cur % 2 == 0)
      printf("%d ", cur);
  }
  else
  {
    if (cur % 2 != 0)
      printf("%d ", cur);
  }
  return enumerateEvenOrOdd(lim, cur + 1, type);
}

int main()
{
  int a;
  printf("Enter number to find even or odd upto: ");
  scanf("%d", &a);
  printf("\nOdd Numbers: \n");
  enumerateEvenOrOdd(a, 1, 0);
  printf("\nEven Numbers: \n");
  enumerateEvenOrOdd(a, 1, 1);
  return 0;
}
