#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: It's the hash table.
 *
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (!ht || !ht->array)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			node = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = node;
		}
	}

	free(ht->array);
	free(ht);
}
