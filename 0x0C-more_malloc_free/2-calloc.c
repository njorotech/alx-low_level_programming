#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * _calloc - allocates memory for an array
  * @nmemb: number of element for the array
  * @size: size of bytes for each element of array
  *
  * Return: - pointer to the allocated memory
  * Returns NULL if malloc fails, or nmemb/size is 0
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
