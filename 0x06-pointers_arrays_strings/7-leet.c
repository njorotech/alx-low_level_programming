#include "main.h"

/**
  * *leet - encodes a string
  * @s: string
  *
  * Return: string
  */
char *leet(char *s)
{
	int i = 0, j, l = 10;
	char tr[10] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
	char trw[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		j = 0;
		while (j < l)
		{
			if (s[i] == tr[j])
			{
				s[i] = trw[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
