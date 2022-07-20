#include "lists.h"
/**
 * free_listint - free the struct element
 * @head: pointer to struct listint
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *prev;

	if (head == NULL)
	{
		free(head);
	}
	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
	free(head);
}
