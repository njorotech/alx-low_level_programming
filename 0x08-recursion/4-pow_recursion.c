#include "main.h"

/**
  * _pow_recursion - returns the value of x raised to the power of y
  * @x: x parameter
  * @y: y parameter
  *
  * Return: -1 if y is lower than 0
  * otherwise return the result
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
