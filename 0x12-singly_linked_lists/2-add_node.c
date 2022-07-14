#include "lists.h"
#include <string.h>
/**
 * add_node - add a node to the list
 * @head: pointer to struct list_s
 * @str: pointer to string
 * Return: the number of lists
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

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
	temp->next = *head;
	*head = temp;
	return (*head);
}
