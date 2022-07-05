#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - struct pointer
 * @age: int
 * @name: char pointer
 * @owner: char pointer
 * Return: dog_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d_dog;
	int i = 0, j = 0, p;

	d_dog = malloc(sizeof(dog_t));
	if (d_dog == NULL || name == NULL || owner == NULL)
	{
		free(d_dog);
		return (NULL);
	}
	while (*(name + i) != '\0')
		i++;
	while (*(owner + j) != '\0')
		j++;
	d_dog->name = malloc(sizeof(char) * (i + 1));
	if (d_dog->name == NULL)
	{
		free(d_dog->name);
		free(d_dog);
		return (NULL);
	}
	for (p = 0; p < i; p++)
		d_dog->name[p] = *(name + p);
	d_dog->name[p] = '\0';
	d_dog->owner = malloc(sizeof(char) * (j + 1));
	if (d_dog->owner == NULL)
	{
		free(d_dog->owner);
		free(d_dog->name);
		free(d_dog);
		return (NULL);
	}
	for (p = 0; p < j; p++)
		d_dog->owner[p] = *(owner + p);
	d_dog->owner[p] = '\0';
	d_dog->age = age;
	return (d_dog);
}
