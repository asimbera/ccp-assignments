#include <stdio.h>

/**
 * Reverse a number.
 * @param val current integer
 * @param rev current reversed integer
*/
int reverseInt(int val, int rev)
{
  if (val == 0)
    return rev;
  int rem = val % 10;
  return reverseInt(val / 10, (rev * 10) + rem);
}

int main()
{
  int a;
  printf("Enter number to reverse: ");
  scanf("%d", &a);
  printf("Reverse of %d is %d.\n", a, reverseInt(a, 0));
  return 0;
}
