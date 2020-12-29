#include <stdio.h>

/// Finds length of a string without null terminator
int lenOfStr(char text[])
{
  int i = 0;
  while (text[i] != '\0')
    i++;
  return i - 1;
}

/// Count frequency of each and every character
void countFreq(char text[])
{
  int len = lenOfStr(text), char_map[200]; // ascii
  for (int i = 0; i < 200; i++)
    char_map[i] = 0;
  for (int i = 0; i < len; i++)
    char_map[text[i]]++;

  printf("Frequency of characters: \n");
  for (int j = 0; j < 200; j++)
  {
    if (char_map[j])
      printf("%c: %d, ", j, char_map[j]);
  }
  printf("\n");
}

int main()
{
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  countFreq(str);
  return 0;
}
