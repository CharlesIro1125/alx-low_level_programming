#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - struct pointer
 * @d: struct dog_t pointer
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d->owner != NULL)
	{
		free(d->owner);
	}
	else if (d->name != NULL)
	{
		free(d->name);
	}
	else if (d != NULL)
	{
		free(d);
	}
	else
	{
		free(d->owner);
		free(d->name);
		free(d);
	}

}
