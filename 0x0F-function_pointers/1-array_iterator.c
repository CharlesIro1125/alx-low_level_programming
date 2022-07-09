#include <stdlib.h>

/**
 * array_iterator - function that executes a
 * function
 * @array: an array of numbers
 * @size: size of array
 * @action: function to call
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
