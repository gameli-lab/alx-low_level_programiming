#include "main.h"

/**
 *checker - checking for prime numbers
 *@x: the integer
 *@divisor: divider for the integer
 *
 *Return: the value
 */

int checker(int x, int divisor)
{
  if (divisor <= 1)
    {
      return (1);
    }
  else if (n % divisor == 0)
    {
      return (0);
    }
  else
    {
      return (n, divisor - 1);
    }
}


/**
 *is_prime - checking for primes
 *@n: integer to be tested
 *Return: result of the test
 */


int is_prime_number(int n)
{
  if (n <= 1)
    {
      return (0);
    }
  return (checker(n, n - 1));
}
