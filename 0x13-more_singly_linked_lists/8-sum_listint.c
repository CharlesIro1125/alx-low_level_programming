#include "lists.h"
/**
 * sum_listint - sum of all data(n) of nth node
 * @head: pointer to struct listint
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *first;
	int data = 0;

	if (head == NULL)
	{
		return (0);
	}
	first = head;
	while (head != NULL)
	{
		data += head->n;
		head = head->next;
	}
	head = first;
	return (data);
}
