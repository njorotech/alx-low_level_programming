#include "main.h"

/**
  * print_times_table - prints n times table
  * @n: n times
  *
  * Return: void
  */
void print_times_table(int n)
{
	if ((n > 15) || (n < 0))
	{

	}
	else
	{
		int i;
		int j;
		int result;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				_putchar(result + '0');
				if (j == n)
					continue;
				_putchar(',');
				_putchar('\t');
			}
			_putchar('\n');
		}
	}
}
