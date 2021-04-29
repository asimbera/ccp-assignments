#include <stdio.h>

int main()
{
  int arr[50], l, q;

  printf("No of elements: ");
  scanf("%d", &l);
  for (int i = 0; i < l; i++)
    scanf("%d", &arr[i]);
  printf("Element to search: ");
  scanf("%d", &q);

  for (int i = 0; i < l; i++)
  {
    if (arr[i] == q)
    {
      printf("Element Found. Index: %d\n", i);
      return 0;
    }
  }
  printf("Element not found.\n");

  return 0;
}
