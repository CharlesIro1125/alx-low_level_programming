#include "main.h"

/**
 * reset_to_98 - function that changes the
 * value of the variable using a pointer.
 * @n: An integer pointer.
 * description: changes the initial value
 * of the int n by dereferencing.
 * Return: Always return void.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
