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
	int l = 0;
	int j = 0;
	char *ptr;

	while (s1[l] != '\0')
	{
		l++;
	}
	while (s2[j] != '\0')
	{
		s1[l + j] = s2[j];
	}
	ptr = malloc(sizeof(*s1));
	return (ptr);
}
