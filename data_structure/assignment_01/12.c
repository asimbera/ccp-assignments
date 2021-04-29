#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
  char names[50][50];
  int length;
  printf("No of names: ");
  scanf("%d", &length);

  for (int i = 0; i < length; i++)
    scanf("%s", &names[i]);

  for (int i = 0; i < length; i++)
  {
    int pre = INT_MIN, idx;
    for (int j = i; j < length; j++)
    {
      int k = strcmp(names[i], names[j]);
      if (pre < k)
      {
        pre = k;
        idx = j;
      }
    }
    char temp[50];
    strcpy(temp, names[i]);
    strcpy(names[i], names[idx]);
    strcpy(names[idx], temp);
  }

  for (int i = 0; i < length; i++)
    printf("%s ", names[i]);

  return 0;
}
