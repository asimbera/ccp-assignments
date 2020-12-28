#include <stdio.h>
#include <math.h>

int diameterOf(int val)
{
  return 2 * val;
}
double circumferenceOf(int val)
{
  return 2 * M_PI * val;
}
double areaOf(int val)
{
  return M_PI * pow(val, 2);
}

int main()
{
  int a;
  printf("Radius of the circle: ");
  scanf("%d", &a);
  printf("Radius: %d, Diameter: %d, Circumference: %.2f, Area: %.2f\n", a, diameterOf(a), circumferenceOf(a), areaOf(a));
  return 0;
}
