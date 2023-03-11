#include "main.h"

/**
  * checkPrime - computes prime numbers
  * @n: number to be checked if it is prime
  * @i: parameter to divide n
  *
  * Return: return 1 if n is a prime number
  * 0 if otherwise
  */
int checkPrime(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		return(checkPrime(n, i + 1));
	}
	return (1);
}

/**
  * is_prime_number - checks for a prime number
  * @n: number to be checked
  *
  * Return: 1 if n is a prime number
  * 0 if otherwise
  */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (checkPrime(n, i));
}
