#include <stdio.h>

int main()
{
  // ASCII is 7-bit character set containing 128 characters.
  // 0-31, 127 are control characters.
  // ASCII 32 is space character.
  int start = 32, limit = 126;
  for (int i = start; i <= limit; i++)
    printf("%d : %c, ", i, i);

  printf("\n");

  return 0;
}
