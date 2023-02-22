#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints natural numbers
  * @n: the starting point for numbers
  *
  * Return: always zero
  */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			if ((n >= 0) && (n < 10))
			{

				_putchar(n + '0');
			}
			else if ((n > 9) && (n < 100))
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if ((n > 99) && (n < 1000))
			{
				_putchar((n / 100) + '0');
				_putchar(((n / 10) % 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			_putchar(n + '0');
			if (n == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}

	}
	_putchar('\n');
}
