#include "main.h"

/**
  * print_diagonal - draws a diagonal line
  * @n: number of times to print \
  *
  * Return: nothing
  */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			}
			else if (j < i)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
