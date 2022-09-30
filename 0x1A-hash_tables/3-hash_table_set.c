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
	hash_node_t *head;
	hash_node_t *temp;
	unsigned long int index;

	if (*key == '\0' || key == NULL)
		return (0);
	if (ht == NULL)
		return (0);
	nodes = ht->array;
	index = key_index((unsigned char *)key, ht->size);
	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
	{
		free(temp);
		return (0);
	}
	temp->key = (char *)key;
	temp->value = (char *)value;
	head = nodes[index];
	if (head == NULL)
	{
		temp->next = NULL;
		nodes[index] = temp;
		return (1);
	}
	if (head->key == NULL)
	{
		head->key = (char *)key;
		head->value = (char *)value;
		head->next = NULL;
		free(temp);
		return (1);
	}
	temp->next = head;
	head = temp;
	return (1);
}

