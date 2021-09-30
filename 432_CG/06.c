//06. Write a C Program to show the two dimensional Scaling of an Object.

#include <stdio.h>
void scale(int a[][2], int b[], int n)
{
  int i = 0;
  while (i < n)
  {
    a[i][0] = a[i][0] * b[0];
    a[i][1] = a[i][1] * b[1];
    printf("(%d, %d)\n", a[i][0], a[i][1]);
    i++;
  }
}
int main()
{
  int size_o = 3;
  int points[][2] = {{10, 14}, {13, 9}, {14, 7}};
  int scl[] = {8, 6};
  scale(points, scl, size_o);
  return 0;
}
