#include <stdio.h>

int main()
{
  int matrix1[100][100], matrix2[100][100], matrix3[100][100], rows, cols, i, j;
  printf("Enter number of rows and columns: ");
  scanf("%d %d", &rows, &cols);

  printf("Enter first matrix elements: \n");
  for (i = 0; i < rows; i++)
    for (j = 0; j < cols; j++)
      scanf("%d", (*(matrix1 + i) + j));

  printf("Enter second matrix elements: \n");
  for (i = 0; i < rows; i++)
    for (j = 0; j < cols; j++)
      scanf("%d", (*(matrix2 + i) + j));

  // addition logic
  for (i = 0; i < rows; i++)
    for (j = 0; j < cols; j++)
      *(*(matrix3 + i) + j) = *(*(matrix1 + i) + j) + *(*(matrix2 + i) + j);

  printf("\nNew matrix:\n");
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
      printf("%d ", *(*(matrix3 + i) + j));
    printf("\n");
  }

  return 0;
}
