#include "lists.h"
/**
 * add_nodeint_end - add elements to struct
 * listint
 * @head: pointer to a pointer to struct listint
 * @n: integer
 * Return: a pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	temp = *head;
	while (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	new->n = n;
	new->next = NULL;
	(*head)->next = new;
	*head = temp;
	return (*head);
}
