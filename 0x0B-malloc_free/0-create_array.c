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
	unsigned int i;
	char *s = (char *)malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
