#include "hash_tables.h"

/**
 * hash_table_print - It prints a hash table.
 * @ht: Hash Table.
 *
 * Return: Nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *tmp;

	if (!ht || !ht->array)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		for (; tmp; tmp = tmp->next)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
		}
	}

	puts("}");
}
