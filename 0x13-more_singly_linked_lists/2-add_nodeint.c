#include "lists.h"
/**
 * add_nodeint - print the elements of struct
 * listint
 * @head: pointer to a pointer to struct listint
 * @n: integer
 * Return: a pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
