#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: string
  *
  * Return: nothing
  */
void puts_half(char *str)
{
	int i = 0;
	int n;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		n = i / 2;
		for (j = n; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		n = (i - 1) / 2;
		for (j = n + 1; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
