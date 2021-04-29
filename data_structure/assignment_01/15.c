#include <stdio.h>

int main()
{
  int array[100][100], len_x, len_y, product = 1;
  printf("Array length: ");
  scanf("%d%d", &len_x, &len_y);

  for (int i = 0; i < len_x; i++)
  {
    for (int j = 0; j < len_y; j++)
      scanf("%d", &array[i][j]);
  }

  for (int i = 0; i < len_x; i++)
  {
    for (int j = 0; j < len_y; j++)
      product *= array[i][j];
  }

  printf("Product: %d\n", product);

  return 0;
}
