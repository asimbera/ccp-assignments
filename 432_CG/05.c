//05. Write a C Program to show the two dimensional Rotation of an Object.

#include <math.h>
#include <stdio.h>
#define SIN(x) sin(x * 3.14159 / 180)
#define COS(x) cos(x * 3.14159 / 180)

void rotate(float a[][2], int n, int x_pivot, int y_pivot,
            int angle)
{
  int i = 0;
  while (i < n)
  {
    int x_shifted = a[i][0] - x_pivot;
    int y_shifted = a[i][1] - y_pivot;
    a[i][0] = x_pivot + (x_shifted * COS(angle) - y_shifted * SIN(angle));
    a[i][1] = y_pivot + (x_shifted * SIN(angle) + y_shifted * COS(angle));
    printf("(%.3f, %.3f)\n", a[i][0], a[i][1]);
    i++;
  }
}

int main()
{

  int size1 = 4;

  float points_list1[][2] = {{50, 10},
                             {15, 21},
                             {20, 20},
                             {23, 10}};
  rotate(points_list1, size1, 0, 0, 45);
  return 0;
}
