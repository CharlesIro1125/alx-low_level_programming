#include "hash_tables.h"
/**
 * key_index - The index of the hash table
 * @key: The key of the hash map
 * @size: The size of the hash table
 * Return: the index of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
