#include <stdio.h>

int main()
{
  int arr[50], l, sum = 0;
  float avg;

  printf("No of elements: ");
  scanf("%d", &l);

  for (int i = 0; i < l; i++)
  {
    printf("Elem (%d): ", i);
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  avg = sum / l;

  printf("Sum: %d, Avarage: %.2f\n", sum, avg);

  return 0;
}
