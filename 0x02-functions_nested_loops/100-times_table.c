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
				if (result < 10)
				{
					_putchar(result + '0');
				}
				else if ((result >= 10) && (result < 100))
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				} else if (result > 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
