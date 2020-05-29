#include "hash_tables.h"

/**
 * hash_table_create - It creates a new hash table.
 * @size: It's the size for new hash table.
 *
 * Return: A pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	new_hash = malloc(sizeof(hash_table_t) * size);
	if (!new_hash)
		return (NULL);

	return (new_hash);
}
