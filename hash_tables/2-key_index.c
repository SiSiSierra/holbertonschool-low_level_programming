#include "hash_tables.h"

/**
 * key_index - Return the index of a key
 *
 * @key: Key
 * @size: Size of hash table array
 * Return: Index generated from key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
