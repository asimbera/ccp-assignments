#include <stdio.h>

int main()
{
  int arr_a[50], arr_b[25], arr_c[25], l, p, q;

  printf("No of elements: ");
  scanf("%d", &l);

  for (int i = 0; i < l; i++)
  {
    printf("Elem (%d): ", i);
    scanf("%d", &arr_a[i]);
  }

  p = l % 2 == 0 ? l / 2 : (l + 1) / 2;
  q = l - p;

  for (int i = 0; i < p; i++)
  {
    arr_b[i] = arr_a[i];
  }

  for (int i = 0; i < q; i++)
  {
    arr_c[i] = arr_a[i + p];
  }

  printf("\nElem of b array: \n");
  for (int i = 0; i < p; i++)
  {
    printf("%d ", arr_b[i]);
  }

  printf("\nElem of c array: \n");
  for (int i = 0; i < q; i++)
  {
    printf("%d ", arr_c[i]);
  }

  return 0;
}
