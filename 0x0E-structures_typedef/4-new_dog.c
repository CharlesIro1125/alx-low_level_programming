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
	/*dog_t y_dog;*/
	int i = 0, j = 0, p;

	d_dog = malloc(sizeof(dog_t));
	if (d_dog == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
	{
		free(d_dog);
		return (NULL);
	}
	while (*(name + i) != '\0')
		i++;
	while (*(owner + j) != '\0')
		j++;
	for (p = 0; p < i; p++)
		d_dog->name[p] = *(name + p);
	for (p = 0; p < j; p++)
		d_dog->owner[p] = *(owner + p);
	d_dog->age = age;
	return (d_dog);
}
