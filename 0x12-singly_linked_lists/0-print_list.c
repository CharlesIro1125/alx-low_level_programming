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
 * print_list - prints out the elements
 * of the list
 * @h: pointer to struct list_s
 * Return: the number of lists
 */
size_t print_list(const list_t *h)
{
	unsigned int i;
	size_t l = 0;

	if (h == NULL)
		return ('\0');
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			i = getlen(h->str);
			printf("[%d] %s\n", i, h->str);
		}
		else
			printf("[%d] %s\n", 0, "(nil)");
		l++;

		h = h->next;
	}
	return (l);
}
