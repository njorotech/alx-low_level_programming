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
	int length = strlen(str);
	int i;
	char *ptr = (char *)malloc((sizeof(char) * length) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
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
