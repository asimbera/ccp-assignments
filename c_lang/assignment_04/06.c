#include <stdio.h>

int main()
{
  int a[50];
  int b, n = 0;
  printf("Enter number of elements => ");
  scanf("%d", &b);

  // take input
  printf("Enter array Elements: ");
  for (int i = 0; i < b; i++)
    scanf("%d", &a[i]);

  for (int i = 0; i < b; i++)
    n += a[i] < 0 ? 1 : 0;

  printf("No of Negetive Elements: %d \n", n);

  return 0;
}
