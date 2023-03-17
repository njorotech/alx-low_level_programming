#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * array_range - creates an array of integers
  * @min: minimum value of the array
  * @max: maximum value of the array
  *
  * Return: - pointer to the array
  * NULL if malloc fails or min > max
  */
int *array_range(int min, int max)
{
	int i;
	int j;
	int l;
	int *ptr;
	int length;

	if (min > max)
	{
		return (NULL);
	}
	length = 0;
	for (l = min; l <= max; l++)
	{
		length++;
	}

	ptr = malloc(sizeof(int) * length);

	if (ptr == NULL)
	{
		return (NULL);
	}

	j = 0;
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
