#include "hash_tables.h"

/**
 * hash_table_get - etrieves a value associated with a key.
 * @ht : hash table to check
 * @key : the key to retrieve in the hash table
 * 
 * Return: value associate to the key, otherwise NULL if key not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t	*current;
	unsigned long int	index;
	/* checking for invalid input */
	if (!ht || !*key || !key)
		return (0);

	/* calculate the hash table */
	index = key_index(key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}