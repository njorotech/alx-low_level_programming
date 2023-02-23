#include "main.h"

/**
  * print_triangle - prints a triangle
  * @size: size of the triangle
  *
  * Return: nothing
  */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (j <= i)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
