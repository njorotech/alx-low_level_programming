#include "main.h"

/**
  * print_last_digit - print the last digit
  * @n: the number to be computed
  *
  * Return: the value of the last digit
  */
int print_last_digit(int n)
{
	int last_number;

	if (n < 0)
	{
		n *= -1;
	}
	last_number = n % 10;
	_putchar((n % 10) + '0');

	return (last_number);
}
