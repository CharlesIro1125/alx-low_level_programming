#include "dog.h"
#include <stdio.h>
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
	if (name == NULL)
		name = "(nil)";
	if (owner == NULL)
		owner = "(nil)";
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", name, age, owner);
}
