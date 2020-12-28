// Delete from specified position
#include <stdio.h>

int main()
{
  int a[50];
  int l, e;
  printf("No of elements: ");
  scanf("%d", &l);

  for (int i = 0; i < l; i++)
  {
    printf("Element (%d): ", i);
    scanf("%d", &a[i]);
  }

  printf("Element position=> ");
  scanf("%d", &e);

  if (e > (l - 1))
  {
    printf("Position is out of range.");
    return 1;
  }

  // shift position
  for (int i = e; i < l; i++)
  {
    a[i] = a[i + 1];
  }
  // reduce array length by 1
  l--;

  printf("Resulting array => ");
  for (int i = 0; i < l; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}
