#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: - first string
  * @src: second string
  *
  * Return: a point to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	return (dest);
}
