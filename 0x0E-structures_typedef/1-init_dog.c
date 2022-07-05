#include <stdio.h>
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
	d->name = name;
	d->age = age;
	d->owner = owner;
{
