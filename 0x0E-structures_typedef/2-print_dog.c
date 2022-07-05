#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - initialize struct
 * @d: struct type pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *name = d->name;
	char *owner = d->owner;
	float age = d->age;

	if (d == NULL)
		return;
	if (name == 0)
		name = "(nil)";
	if (owner == 0)
		owner = "(nil)";
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", name, age, owner);
}
