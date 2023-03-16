#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
  * _strdup - returns a pointer to allocated memory space
  * @str: string parameter
  *
  * Return: NULL if str = NULL or if memory is insufficient
  * string to the duplicated string on success
  */
char *_strdup(char *str)
{
	int length;
	int i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);
	ptr = (char *)malloc((sizeof(char) * length) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
