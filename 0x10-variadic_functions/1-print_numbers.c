#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
  * print_numbers - print numbers
  * @separator: the string to be printed between numbers
  * @n: number of integers passed to the function
  *
  * Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if ((i < (n-1)) && (separator != NULL))
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
		else if ((separator == NULL) || (i == (n - 1)))
		{
			printf("%d", va_arg(ap, int));
		}
	}
	printf("\n");
}
