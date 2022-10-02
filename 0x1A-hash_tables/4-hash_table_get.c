#include "hash_tables.h"
/**
 * hash_table_get - The hash table get function
 * @ht: hash table struct
 * @key: key to the hash map
 * Return: int
 */
char *hash_table_get(hash_table_t *ht, const char *key)
{
	hash_node_t **nodes;
	hash_node_t *head;
	unsigned long int index;

	if (*key == '\0' || key == NULL || ht == NULL)
		return (NULL);
	nodes = ht->array;
	if (nodes == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	head = nodes[index];
	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (strcmp(head->key, (char *)key) == 0)
		{
			return (head->value);
		}
		else
			head = head->next;
	}
	return ("(null)");
}
