#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size : size of array
 *
 * Return: hash or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t	*hash;

	if (size != 0)
	{
		hash = malloc(sizeof(hash_table_t));

		if (!hash)
			return (NULL);

		hash->size = size;
		hash->array = calloc(size, sizeof(hash_node_t *));
		if (!hash->array)
			return (NULL);
		return (hash);
	}
		return (NULL);
}
