#include <stdio.h>

/**
 * Check if a number is a Palindrome.
 * @param val current integer
 * @param rev current reversed integer
 * @param init immutable initial integer
*/
int isPalindrome(int val, int rev, int init)
{
  if (val == 0)
    return rev == init ? 1 : 0;
  int rem = val % 10;
  return isPalindrome(val / 10, (rev * 10) + rem, init);
}

int main()
{
  int a;
  printf("Enter number to reverse: ");
  scanf("%d", &a);
  printf("The number %s Palindrome.\n", isPalindrome(a, 0, a) ? "is" : "is not");
  return 0;
}
