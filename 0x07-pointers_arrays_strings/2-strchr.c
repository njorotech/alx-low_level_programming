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
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			s++;
			break;
		}
		s++;
		i++;
	}
	return (s);
}
