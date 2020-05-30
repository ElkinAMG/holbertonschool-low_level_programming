#include "hash_tables.h"

/**
 * hash_table_get - It retrieves a value associated with a key.
 * @ht: It's a hash table to look up.
 * @key: It's the key to search.
 *
 * Return: The value associated with the element, or NULL otherwise.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k_idx;
	char *value = NULL;
	hash_node_t *tmp;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	k_idx = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[k_idx];

	for (; tmp; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			value = tmp->value;
			break;
		}
	}

	return (value);
}
