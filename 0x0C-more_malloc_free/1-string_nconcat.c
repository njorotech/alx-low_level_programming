#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: bytes of s2 to be concatenated with s1
  *
  * Return: NULL if it fails
  * or pointer to a newly allocated memory space
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *prt;
	unsigned int i;
	unsigned int j;
	unsigned int ls1 = strlen(s1);
	/*unsigned int ls2 = strlen(s2);*/

	prt = (char *)malloc(ls1 + n + 1);
	if (prt == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ls1; i++)
	{
		prt[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		prt[i + j] = s2[j];
	}
	prt[i + j] = '\0';
	return (prt);
}

