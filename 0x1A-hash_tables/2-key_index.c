#include "hash_tables.h"

/**
 * key_index - It returns the index of @key.
 * @key: It's the given key for look up.
 * @size: It's the size of the HT.
 *
 * Return: the index at which the key/value pair should be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
