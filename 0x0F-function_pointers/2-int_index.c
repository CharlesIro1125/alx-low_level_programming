#include <stdlib.h>
/**
 * int_index - function that returns
 * an index
 * @array: an array pointer of int
 * @size: size of array
 * @cmp: function to call
 * Return: int indicating the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, val;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			val = cmp(array[i]);
			if (val != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
