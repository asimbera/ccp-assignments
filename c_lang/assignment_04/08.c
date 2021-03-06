#include <stdio.h>

int main()
{
  int a[50];
  int l, d, e;
  printf("No of elements: ");
  scanf("%d", &l);

  // take input
  printf("Enter array Elements: ");
  for (int i = 0; i < l; i++)
    scanf("%d", &a[i]);

  printf("Element to insert => ");
  scanf("%d", &d);
  printf("Element position=> ");
  scanf("%d", &e);

  if (e > (l - 1) || e < 0)
  {
    printf("Position is out of range.");
    return 1;
  }

  for (int i = l - 1; i >= e; i--)
    a[i + 1] = a[i];
  a[e] = d;

  printf("Resulting array => ");
  for (int i = 0; i < (l + 1); i++)
    printf("%d ", a[i]);

  return 0;
}
