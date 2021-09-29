#include <stdio.h>

int main()
{
  int n, arr[50], *p, query, i;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter elements: ");

  for (i = 0; i < n; i++)
    scanf("%d", arr + i);

  printf("Enter item to search: ");
  scanf("%d", &query);

  p = arr;
  for (i = 0; i < n; i++ && p++)
  {
    if (*p == query)
    {
      printf("Found item %d at position %d.\n", query, i);
      break;
    }
  }

  return 0;
}
