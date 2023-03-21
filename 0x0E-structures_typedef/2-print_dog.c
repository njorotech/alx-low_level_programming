#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
  * print_dog - prints a struct dog
  * @d: dog structure
  *
  * Return: nothing
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{

	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	} else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age == 0)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}