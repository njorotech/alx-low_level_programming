#include "main.h"

/**
  * _puts_recursion - prints a string followed by a new line
  * @s: parameter
  *
  */
void _puts_recursion(char *s)
{
	/*int i = 0;*/

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;

	_puts_recursion(s);
}
