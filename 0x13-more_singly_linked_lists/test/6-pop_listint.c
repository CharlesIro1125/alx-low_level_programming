#include "lists.h"
/**
 * pop_listint - free the head node
 * @head: pointer to pointer to struct listint
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *forward;
	int data;

	if (head == NULL)
	{
		return (0);
	}
	if (*head == NULL)
	{
		return (0);
	}
	if (*head != NULL)
	{
		prev = *head;
		data = (*head)->n;
		forward = (*head)->next;
		free(prev);
		*head = forward;
	}
	return (data);
}
