#include <stdio.h>
#include <limits.h>

int main()
{
  int array_a[50], array_b[50], length_a, length_b, sum = 0;
  printf("1st Array length: ");
  scanf("%d", &length_a);
  for (int i = 0; i < length_a; i++)
    scanf("%d", &array_a[i]);
  printf("2nd Array length: ");
  scanf("%d", &length_b);
  for (int i = 0; i < length_b; i++)
    scanf("%d", &array_b[i]);

  for (int i = 0; i < length_a; i++)
    sum += array_a[i];
  for (int i = 0; i < length_b; i++)
    sum += array_b[i];

  printf("Sum: %d\n", sum);

  return 0;
}
