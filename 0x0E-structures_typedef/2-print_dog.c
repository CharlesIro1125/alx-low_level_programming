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
	char *name;
	char *owner;
	float age;

	if (d == NULL)
		return;
	name = d->name;
	owner = d->owner;
	age = d->age;
	if (name == 0)
		name = "(nil)";
	if (owner == 0)
		owner = "(nil)";
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", name, age, owner);
}
