#include "hash_tables.h"

/**
 * hash_table_create - a hash table
 * @size: size of the hash table
 * Return:a pointer to the head of a link list
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int s = size;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = s;
	table->array = malloc(sizeof(hash_node_t *) * s);
	return (table);
}
