#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - prints strings
  * @separator: string to be printed between strings
  * @n: number of strings passed to the function
  *
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;
	char *str;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(pa, char *);
		if ((separator != NULL) && (i < (n - 1)))
		{
			printf("%s%s", str, separator);
		}
		else if ((separator == NULL) || (i == (n - 1)))
		{
			printf("%s", str);
		}
	}
	printf("\n");
}
