#include "main.h"

/**
  * binary_to_uint - converts a binary to an unsigned int
  * @b: pointer to a string of 0 and 1 chars
  *
  * Return: converted number, or
  * 0 if there one or more chars in the string b 
  * that is not 0 or 1, or b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, length = 0, j = 0, index;
	unsigned int number, sum = 0, power;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (!((b[i] == '0') || (b[i] == '1')))
		{
			return (0);
		}
		i++;
	}

	/*compute the lenght of the string*/
	while (b[j] != '\0')
	{
		length++;
		j++;
	}

	/*index = length - 1;*/

	for (index = (length - 1); index >= 0; index--)
	{
		power = length - (index + 1);
		number = (b[index] - '0') << power;
		sum += number;
	}
	return (sum);
}
