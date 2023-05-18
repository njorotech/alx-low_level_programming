#include "main.h"

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of intergers
  * @width: number of columns
  * @height: number of rows
  *
  * Return: pointer to the array or
  * NULL on failure or
  * NULL if width or height is 0 or negative
  */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int j, i;


	if ((height <= 0) || (width <= 0))
	{
		return (NULL);
	}

	/*Allocation memory for the array block*/
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		/*Allocate memory for each row*/
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
