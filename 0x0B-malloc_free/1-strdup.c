#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * _strdup - returns a pointer to allocated memory space
  * @str: string parameter
  *
  * Return: NULL if str = NULL or if memory is insufficient
  * string to the duplicated string on success
  */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(*str));
	return (ptr);
}
