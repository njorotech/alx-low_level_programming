#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - initialize a variable of type struct dog
  * @d: first parameter
  * @name: second parameter
  * @age: third parameter
  * @owner: fourth parameter
  *
  * Return: nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
