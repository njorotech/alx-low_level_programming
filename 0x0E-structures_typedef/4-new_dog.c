#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * new_dog - creates a new dog
  * @name: first member
  * @age: second member
  * @owner: third member
  *
  * Return: a new dog or null if the function fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mutina = malloc(sizeof(dog_t));

	if (mutina == NULL)
	{
		return (NULL);
	}

	mutina->name = name;
	mutina->owner = owner;
	mutina->age = age;

	return (mutina);
}
