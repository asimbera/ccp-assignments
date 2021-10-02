// Addition, subtraction and multiplication of 2 matrices of size 3x3.
#include <iostream>
using namespace std;

void read_data(int arr[3][3])
{
  int i, j;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
      cin >> arr[i][j];
  }
}

void calculate(int arr_a[3][3], int arr_b[3][3], int arr_add[3][3], int arr_sub[3][3], int arr_mut[3][3])
{
  int i, j, k;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      arr_add[i][j] = arr_a[i][j] + arr_b[i][j];
      arr_sub[i][j] = arr_a[i][j] - arr_b[i][j];
      arr_mut[i][j] = 0;

      for (k = 0; k < 3; k++)
        arr_mut[i][j] += arr_a[i][k] * arr_b[k][j];
    }
  }
}

void display(int arr[3][3])
{
  int i, j;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }
}

int main()
{
  int a[3][3], b[3][3], add[3][3], sub[3][3], mut[3][3];
  cout << "Enter elements of first matrix :" << endl;
  read_data(a);
  cout << "Enter elements of second matrix :" << endl;
  read_data(b);
  calculate(a, b, add, sub, mut);
  cout << "Addition reasult: " << endl;
  display(add);
  cout << "Substraction reasult: " << endl;
  display(sub);
  cout << "Multiplication reasult: " << endl;
  display(mut);
  return 0;
}
