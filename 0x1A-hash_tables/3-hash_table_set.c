#include "hash_tables.h"

/**
 * h_node - Creates a new hash node.
 * @key: Key for the node.
 * @value: For the node.
 *
 * Return: the new node, or NULL on failure
 */

hash_node_t *h_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	node->key = strdup(key);
	if (!(node->key))
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);
	if (!(node->value))
	{
		free(node);
		return (NULL);
	}

	node->next = NULL;

	return (node);
}

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: It's the hash table you want to add or update the key/value.
 * @key: It's the key, cannot be an empty string.
 * @value: It's the value associated with the @key. it can be a empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_conv;
	hash_node_t *hash_node, *update;
	char *upd_val;

	if (ht && key && value && strlen(key) > 0 && ht->size > 0)
	{
		k_conv = key_index((const unsigned char *)key, ht->size);

		update = ht->array[k_conv];

		for (; update; update = update->next)
		{
			if (strcmp(update->key, key) == 0)
			{
				upd_val = strdup(value);
				if (!upd_val)
					return (0);

				free(update->value);
				update->value = upd_val;
				return (1);
			}
		}

		hash_node = h_node(key, value);
		if (!hash_node)
			return (0);
		hash_node->next = ht->array[k_conv];
		ht->array[k_conv] = hash_node;
	}

	return (1);
}
