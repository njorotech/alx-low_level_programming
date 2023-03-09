#include "main.h"

/**
  * squareRoot - finds the square root of a number
  * @n: the number we are finding squareroot for
  * @guess: the number we test whether it is the square root
  *
  * Return: guess if the number is the square root
  * otherwise -1 if the number does not have a natural root
  */
int squareRoot(int n, int guess)
{
	if ((guess * guess) == n)
	{
		return (guess);
	}
	else if ((guess * guess) > n)
	{
		return (-1);
	}
	guess++;
	return (squareRoot(n, guess));
}

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: the number we are returning square root for
  *
  * Return: natural square root of n
  */
int _sqrt_recursion(int n)
{
	int guess = 0;

	return (squareRoot(n, guess));
}
