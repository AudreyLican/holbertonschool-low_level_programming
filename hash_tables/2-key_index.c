#include "hash_tables.h"
unsigned long int hash_djb2(const unsigned char *str);

/**
 * key_index - gives you the index of a key
 * @key : pointer to the key to check the index
 * @size : size of the array of the hash table
 *
 * Return: index where the key must be stored in the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int	key_index;

	if (!key || size == 0)
		return (0);

	key_index = (hash_djb2(key) % size);

	return (key_index);
}
