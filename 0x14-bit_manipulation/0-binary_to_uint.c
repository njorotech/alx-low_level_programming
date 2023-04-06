#include "main.h"
/**
  * binary_to_uint - converts a binary to unsigned int
  * @b: pointer to a string of 0 and 1 chars
  *
  * Return: The converted number
  * or 0 if b is NULL or
  * there is one or more chars in the string that is not 0 or 1
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, k = 0, len = 0, j, sum = 0;
	char d;

	if (b == NULL)
	{
		return (0);
	}
	while (b[k] != '\0')
	{
		len++;
		k++;
	}
	while (b[i] != '\0')
	{
		d = b[i];
		if ((d != '0') || (d != '1'))
		{
			return (0);
		}
		else
		{
			j = d << (len - i - 1);
			sum += j;
		}
		i++;
	}
	return (sum);
}
