#include "main.h"

/**
  * argstostr - concatenates all the arguments of a program
  * @ac: arguments counter
  * @av: arguments array
  *
  * Return: pointer to the new string or NULL if it fails
  */
char *argstostr(int ac, char **av)
{
	char *str;
	int length = 0, i, j, k, m = 0;

	if (ac < 1)
	{
		return (NULL);
	}
	/*compute the length of the arguments*/
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]);
	}

	str = malloc(sizeof(char) * (length + ac + 1));
	if (str == NULL)
	{
		return (NULL);

	}

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			str[m] = av[j][k];
			m++;
		}
		str[m] = '\n';
		m++;
	}
	return (str);
}
