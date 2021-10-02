#include <iostream>
using namespace std;

// Circle
float area(float r)
{
  return 3.14 * r * r;
}
// Square
float area(int s)
{
  return s * s;
}
// Rect
float area(int w, int l)
{
  return w * l;
}
// Triangle
float area(float b, float h)
{
  return (b * h) / 2;
}

int main()
{
  int s, w, l;
  float r, b, h;
  cin >> r;
  cout << "Area of circle: " << area(r) << endl;
  cin >> s;
  cout << "Area of square: " << area(s, s) << endl;
  cin >> w >> l;
  cout << "Area of rectangle: " << area(w, l) << endl;
  cin >> b >> h;
  cout << "Area of triangle: " << area(b, h) << endl;
  return 0;
}
