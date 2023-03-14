#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * create_array - creates an array of chars
  * and initializes it with a specific char
  * @size: size of the array
  * @c: char variable
  *
  * Return: NULL if size = 0
  * pointer to the array, or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(1);

	if (size == 0)
	{
		return (NULL);
	}
	s[0] = c;
	return (s);
}
