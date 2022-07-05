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

	d_dog = malloc(sizeof(dog_t));
	if (d_dog == NULL)
		return (NULL);
	d_dog->name = name;
	d_dog->age = age;
	d_dog->owner = owner;
	return (d_dog);
}
