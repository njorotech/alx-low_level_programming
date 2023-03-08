#include "main.h"

/**
  * factorial - returns factorial of a given number
  * @n: number parameter
  *
  * Return: return -1 if n is lower than 0
  * otherwise return the factorial
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((n == 0) || (n == 1))
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
