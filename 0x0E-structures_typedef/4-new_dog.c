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
	dog_t y_dog;
	
	if (name == NULL || owner == NULL)
		return (NULL);
	y_dog.name = name;
	y_dog.age = age;
	y_dog.owner = owner;
	d_dog = &y_dog;
	if (d_dog == NULL)
		return (NULL);
	return (d_dog);
}
