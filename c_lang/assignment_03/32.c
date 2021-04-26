#include <stdio.h>

int main()
{
  int n, comp;
  printf("Enter upper limit: ");
  scanf("%d", &n);

  for (int i = 1; i < n; i++)
  {
    comp = 0;
    for (int j = 1; j < i; j++)
    {
      if (i % j == 0)
        comp += j;
    }

    if (i == comp)
      printf("%d, ", i);
  }

  printf("\n");

  return 0;
}
