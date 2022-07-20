#include "lists.h"
/**
 * free_listint2 - free the struct element
 * @head: pointer to struct listint
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *prev;
	listint_t *first = *head;

	if (head == NULL)
	{
		printf("freed !\n");
	}
	if (*head == NULL)
	{
		free(*head);
		return;
	}
	while (*head != NULL)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
	}
	free(*head);
	*head = first;
	*head = NULL;
}
