#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize struct
 * @age: int
 * @name: char pointer
 * @owner: char pointer
 * @d: struct type pointer
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *f;

	f = d;
	if (f == NULL)
		return (void);
	f->name = name;
	f->age = age;
	f->owner = owner;
	return (void);
}
