-   [Functions](#functions)
    -   [Write a C program to find cube of any number using
        function.](#write-a-c-program-to-find-cube-of-any-number-using-function.)
    -   [Write a C program to find diameter, circumference and area of
        circle using
        functions.](#write-a-c-program-to-find-diameter-circumference-and-area-of-circle-using-functions.)
    -   [Write a C program to find maximum and minimum between two
        numbers using
        functions.](#write-a-c-program-to-find-maximum-and-minimum-between-two-numbers-using-functions.)
    -   [Write a C program to check whether a number is even or odd
        using
        functions.](#write-a-c-program-to-check-whether-a-number-is-even-or-odd-using-functions.)
    -   [Write a C program to check whether a number is prime or not
        using
        function.](#write-a-c-program-to-check-whether-a-number-is-prime-or-not-using-function.)
    -   [Write a program to check whether a number is an Armstrong
        number or not using
        function.](#write-a-program-to-check-whether-a-number-is-an-armstrong-number-or-not-using-function.)
    -   [WAP to check a number is perfect number or not using
        functions.](#wap-to-check-a-number-is-perfect-number-or-not-using-functions.)
    -   [Write a C program to find all prime numbers between given
        interval using
        functions.](#write-a-c-program-to-find-all-prime-numbers-between-given-interval-using-functions.)
    -   [Write a C program to print all strong numbers between given
        interval using
        functions.](#write-a-c-program-to-print-all-strong-numbers-between-given-interval-using-functions.)
    -   [Write a C program to print all Armstrong numbers between given
        interval using
        functions.](#write-a-c-program-to-print-all-armstrong-numbers-between-given-interval-using-functions.)
    -   [Write a C program to print all perfect numbers between given
        interval using
        functions.](#write-a-c-program-to-print-all-perfect-numbers-between-given-interval-using-functions.)
-   [Recursion](#recursion)
    -   [Write a C program to find power of any number using
        recursion.](#write-a-c-program-to-find-power-of-any-number-using-recursion.)
    -   [Write a C program to print all natural numbers between 1 to n
        using
        recursion.](#write-a-c-program-to-print-all-natural-numbers-between-1-to-n-using-recursion.)
    -   [Write a C program to print all even or odd numbers in given
        range using
        recursion.](#write-a-c-program-to-print-all-even-or-odd-numbers-in-given-range-using-recursion.)
    -   [Write a C program to find sum of all natural numbers between 1
        to n using
        recursion.](#write-a-c-program-to-find-sum-of-all-natural-numbers-between-1-to-n-using-recursion.)
    -   [Write a C program to find sum of all even or odd numbers in
        given range using
        recursion.](#write-a-c-program-to-find-sum-of-all-even-or-odd-numbers-in-given-range-using-recursion.)
    -   [Write a C program to find reverse of any number using
        recursion.](#write-a-c-program-to-find-reverse-of-any-number-using-recursion.)
    -   [Write a C program to check whether a number is palindrome or
        not using
        recursion.](#write-a-c-program-to-check-whether-a-number-is-palindrome-or-not-using-recursion.)
    -   [Write a C program to find sum of digits of a given number using
        recursion.](#write-a-c-program-to-find-sum-of-digits-of-a-given-number-using-recursion.)
    -   [Write a C program to find factorial of any number using
        recursion.](#write-a-c-program-to-find-factorial-of-any-number-using-recursion.)
    -   [Write a C program to generate nth Fibonacci term using
        recursion.](#write-a-c-program-to-generate-nth-fibonacci-term-using-recursion.)
    -   [Write a C program to find GCD (HCF) of two numbers using
        recursion.](#write-a-c-program-to-find-gcd-hcf-of-two-numbers-using-recursion.)
    -   [Write a C program to find LCM of two numbers using
        recursion.](#write-a-c-program-to-find-lcm-of-two-numbers-using-recursion.)
    -   [Write a C program to display all array elements using
        recursion.](#write-a-c-program-to-display-all-array-elements-using-recursion.)
    -   [Write a C program to find sum of elements of array using
        recursion.](#write-a-c-program-to-find-sum-of-elements-of-array-using-recursion.)
    -   [Write a C program to find maximum and minimum elements in array
        using
        recursion.](#write-a-c-program-to-find-maximum-and-minimum-elements-in-array-using-recursion.)

# Functions

## Write a C program to find cube of any number using function.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>
#include <math.h>

int cubeOf(int val)
{
  int res = pow(val, 3);
  return res;
}

int main()
{
  int a, b;
  printf("Enter a number to find cube of: ");
  scanf("%d", &a);
  b = cubeOf(a);
  printf("Cube of %d is: %d\n", a, b);
  return 0;
}
```

[*Program Output :*]{.ul} ![image](f_01)

## Write a C program to find diameter, circumference and area of circle using functions.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
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
```

[*Program Output :*]{.ul} ![image](f_02)

## Write a C program to find maximum and minimum between two numbers using functions.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>

int minMaxOf(int a, int b, int flag)
{
  // flag: 0 = Min, 1 = Max
  if (flag)
    return a > b ? a : b;
  return a > b ? b : a;
}

int main()
{
  int a, b;
  printf("Enter 2 Numbers: ");
  scanf("%d", &a);
  scanf("%d", &b);
  printf("Max: %d, Min: %d\n", minMaxOf(a, b, 1), minMaxOf(a, b, 0));
}
```

[*Program Output :*]{.ul} ![image](f_03)

## Write a C program to check whether a number is even or odd using functions.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>

int isEvenOrOdd(int val)
{
  // even = 1, odd = 0
  return val % 2 == 0 ? 1 : 0;
}

int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);

  printf("The number is %s.\n", isEvenOrOdd(a) ? "Even" : "Odd");

  return 0;
}
```

[*Program Output :*]{.ul} ![image](f_04)

## Write a C program to check whether a number is prime or not using function.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>
#include <math.h>

// check using trial division method
// prime = 1, not prime = 0
int IsPrime(int val)
{
  int sqrtOfVal = sqrt(val), prime = 1;
  for (int i = 2; i <= sqrtOfVal; i++)
  {
    if (val % i == 0)
    {
      prime = 0;
      break;
    }
  }

  return prime;
}

int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);

  printf("The number is %s.\n", IsPrime(a) ? "Prime" : "Not Prime");

  return 0;
}
```

[*Program Output :*]{.ul} ![image](f_05)

## Write a program to check whether a number is an Armstrong number or not using function.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>
#include <math.h>

int isArmstrong(int val)
{
  // int digits = 0;
  int i = val, total = 0;
  while (i > 0)
  {
    // digits++;
    total += pow(i % 10, 3);
    i = i / 10;
  }
  return total == val ? 1 : 0;
}

int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);

  printf("The number is %s.\n", isArmstrong(a) ? "Armstrong" : "Not Armstrong");

  return 0;
}
```

[*Program Output :*]{.ul} ![image](f_06)

## WAP to check a number is perfect number or not using functions.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>

int isPerfect(int val)
{
  int total = 0;
  for (int i = 1; i < val; i++)
  {
    if (val % i == 0)
      total += i;
  }

  return total == val ? 1 : 0;
}

int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);

  printf("The number is %s.\n", isPerfect(a) ? "Perfect" : "Not Perfect");

  return 0;
}
```

[*Program Output :*]{.ul} ![image](f_07)

## Write a C program to find all prime numbers between given interval using functions.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>
#include <math.h>

// Prime checking using Sieve of Eratosthenes
void enumeratePrime(int lim)
{
  int flags[lim];
  for (int i = 0; i < lim; i++)
    flags[i] = 1;
  for (int i = 2; i < sqrt(lim); i++)
  {
    if (flags[i])
    {
      int j = pow(i, 2);
      while (j < lim)
      {
        flags[j] = 0;
        j += i;
      }
    }
  }

  for (int i = 2; i < lim; i++)
  {
    if (flags[i])
    {
      printf("%d ", i);
    }
  }
}

int main()
{
  int a;
  printf("Enter upper limit: ");
  scanf("%d", &a);

  enumeratePrime(a);

  return 0;
}
```

[*Program Output :*]{.ul} ![image](f_08)

## Write a C program to print all strong numbers between given interval using functions.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>
#include <math.h>

int isStrongNumber(int val)
{
  int i = val, total = 0;
  while (i > 0)
  {
    // using tgamma as factorial alternative
    // from math.h
    total += tgamma((i % 10) + 1);
    i = i / 10;
  }
  return total == val ? 1 : 0;
}

void enumerateStrong(int lim)
{
  printf("Strong Numbers: \n");
  for (int i = 1; i <= lim; i++)
  {
    if (isStrongNumber(i))
    {
      printf("%d ", i);
    }
  }
}

int main()
{
  int a;
  printf("Enter upper limit: ");
  scanf("%d", &a);

  enumerateStrong(a);

  return 0;
}
```

[*Program Output :*]{.ul} ![image](f_09)

## Write a C program to print all Armstrong numbers between given interval using functions.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>
#include <math.h>

int isArmstrongNumber(int val)
{
  int i = val, total = 0;
  while (i > 0)
  {
    total += pow(i % 10, 3);
    i = i / 10;
  }
  return total == val ? 1 : 0;
}

void enumerateArmstrong(int lim)
{
  printf("Armstrong Numbers: \n");
  for (int i = 1; i <= lim; i++)
  {
    if (isArmstrongNumber(i))
    {
      printf("%d ", i);
    }
  }
}

int main()
{
  int a;
  printf("Enter upper limit: ");
  scanf("%d", &a);

  enumerateArmstrong(a);

  return 0;
}
```

[*Program Output :*]{.ul} ![image](f_10)

## Write a C program to print all perfect numbers between given interval using functions.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>
#include <math.h>

int isPerfectNumber(int val)
{
  int total = 0;
  for (int i = 1; i < val; i++)
  {
    if (val % i == 0)
      total += i;
  }

  return total == val ? 1 : 0;
}

void enumeratePerfect(int lim)
{
  printf("Armstrong Numbers: \n");
  for (int i = 1; i <= lim; i++)
  {
    if (isPerfectNumber(i))
    {
      printf("%d ", i);
    }
  }
}

int main()
{
  int a;
  printf("Enter upper limit: ");
  scanf("%d", &a);

  enumeratePerfect(a);

  return 0;
}
```

[*Program Output :*]{.ul} ![image](f_11)

# Recursion

## Write a C program to find power of any number using recursion.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>

/**
 * Recurring function to find power of given integer.
 * @param val current value
 * @param init initial integer to calculate on
 * @param pow decreasing power
 */
int powOf(int val, int init, int pow)
{
  if (pow == 0)
    return val;
  return powOf(val * init, init, pow - 1);
}

int main()
{
  int a, b;
  printf("Enter a number to find power of: ");
  scanf("%d", &a);
  printf("Enter power: ");
  scanf("%d", &b);

  printf("%d to the power %d is %d.\n", a, b, powOf(1, a, b));
  return 0;
}
```

[*Program Output :*]{.ul} ![image](r_01)

## Write a C program to print all natural numbers between 1 to n using recursion.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>

/**
 * Print all numbers between 1 and [lim]. Both included.
 * @param lim upper limit
 * @param cur current number
*/
void enumerateNaturals(int lim, int cur)
{
  if (cur > lim)
    return;
  printf("%d ", cur);
  return enumerateNaturals(lim, cur + 1);
}

int main()
{
  int a;
  printf("Enter natural number to print upto: ");
  scanf("%d", &a);
  enumerateNaturals(a, 1);
  return 0;
}
```

[*Program Output :*]{.ul} ![image](r_02)

## Write a C program to print all even or odd numbers in given range using recursion.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>

/**
 * Print all even or odd numbers between 1 and [lim]. Both included.
 * @param lim upper limit
 * @param cur current number
 * @param type flag for odd = 0, even = 1
*/
void enumerateEvenOrOdd(int lim, int cur, int type)
{
  if (cur > lim)
    return;
  if (type)
  {
    if (cur % 2 == 0)
      printf("%d ", cur);
  }
  else
  {
    if (cur % 2 != 0)
      printf("%d ", cur);
  }
  return enumerateEvenOrOdd(lim, cur + 1, type);
}

int main()
{
  int a;
  printf("Enter number to find even or odd upto: ");
  scanf("%d", &a);
  printf("\nOdd Numbers: \n");
  enumerateEvenOrOdd(a, 1, 0);
  printf("\nEven Numbers: \n");
  enumerateEvenOrOdd(a, 1, 1);
  return 0;
}
```

[*Program Output :*]{.ul} ![image](r_03)

## Write a C program to find sum of all natural numbers between 1 to n using recursion.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>

/**
 * Find sum upto integer [lim].
 * @param lim upper limit
 * @param cur current integer
 * @param sum sum of numbers upto [cur]
*/
int sumUpto(int lim, int cur, int sum)
{
  if (cur > lim)
    return sum;
  return sumUpto(lim, cur + 1, sum + cur);
}

int main()
{
  int a;
  printf("Enter number to sum upto: ");
  scanf("%d", &a);
  printf("Sum of numbers upto %d: %d\n", a, sumUpto(a, 1, 0));
  return 0;
}
```

[*Program Output :*]{.ul} ![image](r_04)

## Write a C program to find sum of all even or odd numbers in given range using recursion.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>

/**
 * Find sum upto integer [lim].
 * @param lim upper limit
 * @param cur current integer
 * @param sum sum of numbers upto [cur]
 * @param type flag of odd = 0, even = 1
*/
int sumUpto(int lim, int cur, int sum, int type)
{
  if (cur > lim)
    return sum;

  int rule = type ? cur % 2 == 0 : cur % 2 != 0;

  return rule ? sumUpto(lim, cur + 1, sum + cur, type) : sumUpto(lim, cur + 1, sum, type);
}

int main()
{
  int a;
  printf("Enter number to sum upto: ");
  scanf("%d", &a);
  printf("Sum of odd numbers upto %d: %d\n", a, sumUpto(a, 1, 0, 0));
  printf("Sum of even numbers upto %d: %d\n", a, sumUpto(a, 1, 0, 1));
  return 0;
}
```

[*Program Output :*]{.ul} ![image](r_05)

## Write a C program to find reverse of any number using recursion.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>

/**
 * Reverse a number.
 * @param val current integer
 * @param rev current reversed integer
*/
int reverseInt(int val, int rev)
{
  if (val == 0)
    return rev;
  int rem = val % 10;
  return reverseInt(val / 10, (rev * 10) + rem);
}

int main()
{
  int a;
  printf("Enter number to reverse: ");
  scanf("%d", &a);
  printf("Reverse of %d is %d.\n", a, reverseInt(a, 0));
  return 0;
}
```

[*Program Output :*]{.ul} ![image](r_06)

## Write a C program to check whether a number is palindrome or not using recursion.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
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
```

[*Program Output :*]{.ul} ![image](r_07)

## Write a C program to find sum of digits of a given number using recursion.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>

/**
 * Sum of the digits of the given number.
 * @param val current integer
 * @param sum sum upto digits not in [val]
 */
int sumOfDigits(int val, int sum)
{
  if (val == 0)
    return sum;
  return sumOfDigits(val / 10, sum + (val % 10));
}

int main()
{
  int a;
  printf("Enter a number to sum digits of: ");
  scanf("%d", &a);
  printf("Sum of the digits: %d.\n", sumOfDigits(a, 0));
  return 0;
}
```

[*Program Output :*]{.ul} ![image](r_08)

## Write a C program to find factorial of any number using recursion.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>

/**
 * Find factorial of the given number.
 * @param cur current integer
 * @param val factorial upto digits not in [cur]
 */
int factorialOf(int cur, int val)
{
  if (cur <= 1)
    return val;
  return factorialOf(cur - 1, val * cur);
}

int main()
{
  int a;
  printf("Enter a number to find factorial of: ");
  scanf("%d", &a);
  printf("Factorial of %d is %d.\n", a, factorialOf(a, 1));
  return 0;
}
```

[*Program Output :*]{.ul} ![image](r_09)

## Write a C program to generate nth Fibonacci term using recursion.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>

/**
 * Find nth term in fibonacci sequence.
 * @param first First term of said sequence
 * @param Second second term of said sequence
 * @param n `n` of nth
 * @param c current index
*/
int getNthFib(int first, int second, int n, int c)
{
  if (n == c)
    return second;
  return getNthFib(second, first + second, n, c + 1);
}

int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  printf("%dth term of fibonacci sequence is %d.\n", a, getNthFib(1, 1, a, 0));
  return 0;
}
```

[*Program Output :*]{.ul} ![image](r_10)

## Write a C program to find GCD (HCF) of two numbers using recursion.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>

/**
 * Find the greatest common divisor of two numbers.
 * @param first first number
 * @param second second number
 * @param last last found common divisor
 * @param cur current iterator
*/
int findGCD(int first, int second, int last, int cur)
{
  int min = first < second ? first : second;
  if (cur > min)
    return last;
  int common = 0;
  if (first % cur == 0 && second % cur == 0)
    common = cur;
  return findGCD(first, second, common ? common : last, cur + 1);
}

int main()
{
  int a, b;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
  printf("GCD of %d and %d is %d.\n", a, b, findGCD(a, b, 1, 1));
  return 0;
}
```

[*Program Output :*]{.ul} ![image](r_11)

## Write a C program to find LCM of two numbers using recursion.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>

/**
 * Find the LCM of two numbers.
 * @param first first number
 * @param second second number
 * @param cur current iterator
*/
int findLCM(int first, int second, int cur)
{
  if (cur % first == 0 && cur % second == 0)
    return cur;
  return findLCM(first, second, cur + 1);
}

int main()
{
  int a, b;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
  printf("LCM of %d and %d is %d.\n", a, b, findLCM(a, b, a > b ? a : b));
  return 0;
}
```

[*Program Output :*]{.ul} ![image](r_12)

## Write a C program to display all array elements using recursion.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>

void printArray(int arr[], int length, int cur)
{
  if (cur >= length)
    return;
  printf("%d ", arr[cur]);
  return printArray(arr, length, cur + 1);
}

int main()
{
  int a[100], l;

  printf("Enter array length: ");
  scanf("%d", &l);

  for (int i = 0; i < l; i++)
  {
    printf("(%d) > ", i);
    scanf("%d", &a[i]);
  }

  printf("Elements: \n");
  printArray(a, l, 0);

  return 0;
}
```

[*Program Output :*]{.ul} ![image](r_13)

## Write a C program to find sum of elements of array using recursion.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>

int sumOfElements(int arr[], int length, int cur, int sum)
{
  if (cur > length)
    return sum;
  return sumOfElements(arr, length, cur + 1, sum + cur);
}

int main()
{
  int a[100], l;

  printf("Enter array length: ");
  scanf("%d", &l);

  for (int i = 0; i < l; i++)
  {
    printf("(%d) > ", i);
    scanf("%d", &a[i]);
  }

  printf("Sum of Elements: %d\n", sumOfElements(a, l, 0, 0));

  return 0;
}
```

[*Program Output :*]{.ul} ![image](r_14)

## Write a C program to find maximum and minimum elements in array using recursion.

[*Source Code :*]{.ul}

``` {.C breaklines=""}
#include <stdio.h>
#include <limits.h>

// flag 0 = minimum, 1 = maximum
int minMax(int arr[], int length, int cur, int last, int flag)
{
  if (cur >= length)
    return last;
  int check = flag ? last < arr[cur] : last > arr[cur];
  return minMax(arr, length, cur + 1, check ? arr[cur] : last, flag);
}

int main()
{
  int a[100], l;

  printf("Enter array length: ");
  scanf("%d", &l);

  for (int i = 0; i < l; i++)
  {
    printf("(%d) > ", i);
    scanf("%d", &a[i]);
  }

  printf("Minimum: %d\n", minMax(a, l, 0, INT_MAX, 0));
  printf("Maximum: %d\n", minMax(a, l, 0, INT_MIN, 1));

  return 0;
}
```

[*Program Output :*]{.ul} ![image](r_15)
