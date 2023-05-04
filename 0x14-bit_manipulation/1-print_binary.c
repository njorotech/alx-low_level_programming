#include "main.h"

/**
  * print_binary - prints the binary representation of a number
  * @n: decimal number
  *
  * Return: nothing
  */
void print_binary(unsigned long int n)
{
	int i, mask;

	/* for a 32-bit decimal number*/
	for (i = 31; i >= 0; i--)
	{
		mask = 1 << i;
		/* mask to compare with n */
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
