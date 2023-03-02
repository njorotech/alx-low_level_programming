#include "main.h"

/**
  * string_toupper - changes lowercase letters to upper
  * @s: parameter
  *
  * Return: upper case
  */
char *string_toupper(char *s)
{
	while (*s)
	{
		if ((*s >= 'a') && (*s <= 'z'))
		{
			*s = *s - 32;
		}
		s++;
	}
	return (s);
}
