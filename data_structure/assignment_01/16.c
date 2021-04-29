#include <stdio.h>

void Insert(int arr[], int length)
{
  int elem, pos;
  printf("Elem to insert: ");
  scanf("%d", &elem);
  printf("Position: ");
  scanf("%d", &pos);

  for (int i = length - 1; i >= pos; i--)
    arr[i + 1] = arr[i];
  arr[pos] = elem;
}

int main()
{
  int array[50], length;
  printf("Array length: ");
  scanf("%d", &length);

  for (int i = 0; i < length; i++)
    scanf("%d", &array[i]);

  Insert(array, length);
  length++;

  for (int i = 0; i < length; i++)
    printf("%d ", array[i]);

  return 0;
}
