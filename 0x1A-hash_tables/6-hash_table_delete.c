#include "hash_tables.h"
/**
 * hash_table_delete - The hash table to delete
 * map
 * @ht: hash table struct
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **nodes;
	hash_node_t *head, *temp;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	nodes = ht->array;
	if (nodes == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		head = nodes[i];
		while (head != NULL)
		{
			free(head->key);
			free(head->value);
			temp = head;
			head = head->next;
			free(temp);
		}
	}
	free(nodes);
	free(ht);
}
