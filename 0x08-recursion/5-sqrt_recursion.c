#include "main.h"

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: parameter
  *
  * Return: natural square root of n
  */
int _sqrt_recursion(int n)
{
	int i = 1;

	if ((i * i) == n)
	{
		return (i);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}
	else
	{
		i++;
		return (_sqrt_recursion(i));
	}

}
