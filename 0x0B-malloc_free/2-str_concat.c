#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: pointer to concatenated string
  * NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	int length = 0, j = 0, i = 0, k = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length] != '\0')
		length++;
	while (s2[j] != '\0')
	{
		length++;
		j++;
	}
	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		ptr[i] = s2[k];
		k++;
		i++;
	}
	return (ptr);
}
