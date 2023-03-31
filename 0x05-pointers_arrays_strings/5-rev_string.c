#include "main.h"

/**
  * rev_string - reverses a string
  * @s: string
  *
  * Return: nothing
  */
void rev_string(char *s)
{
	int middle, i, length = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;

	}

	middle = length / 2;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
