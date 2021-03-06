#include "hash_tables.h"

/**
 * hash_table_create - It creates a new hash table.
 * @size: It's the size for new hash table.
 *
 * Return: A pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;

	if (size > 0)
	{
		new_ht = malloc(sizeof(hash_table_t));
		if (!new_ht)
			return (NULL);

		new_ht->size = size;
		new_ht->array = calloc(sizeof(hash_node_t *), size);
		if (!(new_ht->array))
		{
			free(new_ht);
			return (NULL);
		}
	}

	return (new_ht);
}
