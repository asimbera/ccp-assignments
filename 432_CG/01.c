//01. Write a C program to draw a line using DDA algorithm

#include <stdio.h>
#include <math.h>

void dda_line(int xs, int ys, int xe, int ye)
{
  int steps, sign_dx, sign_dy, i = 1;
  float x, y, delta_x, delta_y;
  // Calculate steps
  if (fabs(xe - xs) >= fabs(ye - ys))
    steps = fabs(xe - xs);
  else
    steps = fabs(ye - ys);

  delta_x = (float)(xe - xs) / steps;
  delta_y = (float)(ye - ys) / steps;
  if (delta_x > 0)
    sign_dx = 1;
  else if (delta_x == 0)
    sign_dx = 0;
  else
    sign_dx = -1;
  if (delta_y > 0)
    sign_dy = 1;
  else if (delta_y == 0)
    sign_dy = 0;
  else
    sign_dy = -1;
  x = (float)(xs + 0.5 * sign_dx);
  y = (float)(ys + 0.5 * sign_dy);

  printf("The points are :\n");
  while (i <= steps)
  {
    printf("%d  %d\n", (int)floor(x), (int)floor(y));
    x += delta_x;
    y += delta_y;
    i += 1;
  }
}

int main()
{
  dda_line(5, 6, 8, 3);
  return 0;
}
