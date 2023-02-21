#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @n: integer to be computed
  *
  * Return: Always zero
  */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
