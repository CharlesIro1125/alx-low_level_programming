#include "lists.h"
#include <string.h>
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
 * add_node_end - add a node to the list
 * @head: pointer to struct list_s
 * @str: pointer to string
 * Return: the number of lists
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *first;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	if (str != NULL)
	{
		temp->str = strdup(str);
		temp->len = getlen((char *)str);
	}
	else
	{
		temp->str = strdup("(nil)");
		temp->len = 0;
	}
	temp->next = NULL;
	first = *head;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while ((*head)->next != NULL)
		(*head) = (*head)->next;
	(*head)->next = temp;
	*head = first;
	return (temp);
}
