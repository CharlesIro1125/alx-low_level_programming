#include "hash_tables.h"
/**
 * hash_table_set - The hash table set
 * @ht: hash table struct
 * @key: key to the hash map
 * @value: The value to be writen in the map
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **nodes;
	hash_node_t *head, *temp;
	unsigned long int index;

	if (*key == '\0' || key == NULL || value == NULL || ht == NULL)
		return (0);
	nodes = ht->array;
	index = key_index((unsigned char *)key, ht->size);
	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (0);
	temp->key = strdup(key);
	temp->value = strdup(value);
	if (temp->key == NULL || temp->value == NULL)
	{
		free(temp);
		return (0);
	}
	head = nodes[index];
	if (head == NULL)
	{
		temp->next = NULL;
		nodes[index] = temp;
		return (1);
	}
	while (head != NULL)
	{
		if (head->key == temp->key)
		{
			free(head->value);
			head->value = temp->value;
			free(temp->key), free(temp->value), free(temp);
			return (1);
		}
		else
			head = head->next;
	}
	temp->next = nodes[index];
	nodes[index] = temp;
	return (1);
}
