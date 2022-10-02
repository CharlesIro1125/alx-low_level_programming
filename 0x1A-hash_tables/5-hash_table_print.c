#include "hash_tables.h"
/**
 * hash_table_print - The hash table print function
 * @ht: hash table struct
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **nodes;
	hash_node_t *head;
	unsigned long int i;
	long int j = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	nodes = ht->array;
	if (nodes == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		head = nodes[i];
		while (head != NULL)
		{
			if (j == 0)
				printf("'%s':'%s'", head->key, head->value);
			else
				printf(", '%s':'%s'", head->key, head->value);
			head = head->next;
			j++;
		}
	}
	printf("}\n");
}
