#include <stdio.h>

int main()
{
  int arr[50], l;

  printf("No of elements: ");
  scanf("%d", &l);

  for (int i = 0; i < l; i++)
  {
    printf("Elem (%d): ", i);
    scanf("%d", &arr[i]);
  }

  printf("Elem in rev order: \n");
  for (int i = l - 1; i >= 0; i--)
  {
    printf("%d, ", arr[i]);
  }
  printf("\n");

  return 0;
}
