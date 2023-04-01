#include "main.h"

/**
  * rot13 - encodes a string using rot13
  * @s: string to be encoded
  *
  * Return: Encoded string
  */
char *rot13(char *s)
{
	int i = 0, j, l = 52;
	char *tr = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *trw = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

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

