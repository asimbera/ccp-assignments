#include <stdio.h>

int main()
{
  int arr[100][100], rows, cols, i, j;
  printf("Enter number of rows and columns: ");
  scanf("%d %d", &rows, &cols);

  printf("Enter array items: \n");
  for (i = 0; i < rows; i++)
    for (j = 0; j < cols; j++)
      scanf("%d", (*(arr + i) + j));

  printf("\n%dx%d array: \n", rows, cols);
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
      printf("%d ", *(*(arr + i) + j));
    printf("\n");
  }

  return 0;
}
