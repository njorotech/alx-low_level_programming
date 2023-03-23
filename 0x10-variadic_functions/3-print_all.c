#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - prints anything
  * @format: a list of all types of arguments passed to the function
  *
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	va_list pa;

	va_start(pa, format);
}
