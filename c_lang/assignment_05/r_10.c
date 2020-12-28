#include <stdio.h>

/**
 * Find nth term in fibonacci sequence.
 * @param first First term of said sequence
 * @param Second second term of said sequence
 * @param n `n` of nth
 * @param c current index
*/
int getNthFib(int first, int second, int n, int c)
{
  if (n == c)
    return second;
  return getNthFib(second, first + second, n, c + 1);
}

int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  printf("%dth term of fibonacci sequence is %d.\n", a, getNthFib(1, 1, a, 0));
  return 0;
}
