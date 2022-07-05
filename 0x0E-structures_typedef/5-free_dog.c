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
	free(d->owner);
	free(d->name);
	free(d);
}
