#include "main.h"

/**
  * _strcpy - copies a string
  * @dest: destination string
  * @src: source string
  *
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (src);
}
