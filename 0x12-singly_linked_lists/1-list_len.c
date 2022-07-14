#include "lists.h"
/**
 * getlen - function to return the length
 * of a string.
 * @s: pointer to char
 * Return: the length of the string
 */
unsigned int getlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * list_len - count of elements
 * @h: pointer to struct list_s
 * Return: the number of lists
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	if (h == NULL)
		return ('\0');
	while (h != NULL)
	{
		l++;
		h = h->next;
	}
	return (l);
}
