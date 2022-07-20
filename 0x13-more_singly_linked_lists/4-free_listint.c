#include "lists.h"
/**
 * free_listint - free the struct element
 * @head: pointer to struct listint
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
	{
		free(head);
	}
	while (temp != NULL)
	{
		head = temp;
		temp = temp->next;
		free(head);
	}
}
