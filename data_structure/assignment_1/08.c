#include <stdio.h>

int main()
{
  int arr_a[100],
      // array of even numbers
      arr_b[50],
      // array of odd numbers
      arr_c[50],
      // l = first array length, p = pointer of arr_b, q = pointer of arr_c
      l, p = 0, q = 0;

  printf("No of elements: ");
  scanf("%d", &l);
  for (int i = 0; i < l; i++)
  {
    printf("Elem (%d): ", i);
    scanf("%d", &arr_a[i]);
  }

  for (int i = 0; i < l; i++)
  {
    if (arr_a[i] % 2 == 0)
    {
      arr_b[p] = arr_a[i];
      p++;
    }
    else
    {
      arr_c[q] = arr_a[i];
      q++;
    }
  }

  printf("\nEven array: \n");
  for (int i = 0; i < p; i++)
  {
    printf("%d ", arr_b[i]);
  }
  printf("\nOdd array: \n");
  for (int i = 0; i < q; i++)
  {
    printf("%d ", arr_c[i]);
  }

  return 0;
}
