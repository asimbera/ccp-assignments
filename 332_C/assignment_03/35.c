#include <stdio.h>

int main()
{
  int n, i, temp, prev = 1, curr = 2;
  printf("Enter upper limit: ");
  scanf("%d", &n);

  printf("Fibonacci sequence upto %dth terms: \n", n);
  for (i = 1; i <= n; i++)
  {
    printf("%d ", prev);
    temp = curr;
    curr += prev;
    prev = temp;
  }

  return 0;
}
