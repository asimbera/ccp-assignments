//04. Write a C Program to show the two dimensional Translation of an Object

#include <stdio.h>
void translate(int a[][2], int b[], int n)
{
  int i = 0;
  while (i < n)
  {
    a[i][0] = a[i][0] + b[0];
    a[i][1] = a[i][1] + b[1];
    printf("(%d, %d)\n", a[i][0], a[i][1]);
    i++;
  }
}
int main()
{
  int size1 = 4;
  int points[][2] = {{7, 4}, {6, 8}, {10, 11}, {9, 8}};
  int trans[] = {3, 2};
  translate(points, trans, size1);
  return 0;
}
