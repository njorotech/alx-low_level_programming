#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: array to be searched
  * @size: number of elements in the array
  * @cmp: pointer to the function to be used to compare values
  *
  * Return: index of the first element that matches
  * -1 if no element matches or size <= 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int check;

	if ((array == NULL) || (*cmp == NULL))
	{
		return (0);
	}

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		check = cmp(array[i]);
		if (check != 0)
		{
			return (i);
		}

	}
	return (-1);
}
