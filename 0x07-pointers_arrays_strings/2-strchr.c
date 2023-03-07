#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: first parameter
  * @c: second parameter
  *
  * Return: Returns a pointer to the first occurrence of the
  * character c in the string s,
  * or NULL if the character is not found
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c; i++)
	{
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (0);
	}
}
