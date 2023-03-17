#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr: old memory block
  * @old_size: size of the old memory block
  * @new_size: size of the new memory block
  *
  * Return: pointer to the new memory block
  * NULL if new_size is equal to zero and ptr is not NULL
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *str;

	if (ptr == NULL)
	{
		str = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size > old_size)
	{
		str = malloc(new_size);
	}
	else
	{
		str = malloc(new_size);
	}
	return (str);
	free(ptr);

}
