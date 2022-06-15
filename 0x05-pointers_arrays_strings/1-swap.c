#include "main.h"

/**
 * swap_int - function that swaps
 * value of the variable using a pointer.
 * @a: An integer pointer.
 * @b: An integer pointer.
 *
 * description: changes the initial value
 * of the int (a,b) by dereferencing.
 * Return: Always return void.
 */
void swap_int(int *a, int *b)
{
	int k = *a;

	*a = *b;
	*b = k;
}
