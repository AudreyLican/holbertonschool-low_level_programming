#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht : hash table where to add or update the key and value element
 * @key : key of the elment
 * @value : value associated to the key and must be duplicated
 * Return: 1 for success, otherwise 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t	*new_node, *element, *current;
	unsigned long int	index;

	if (!ht || !key || !*key)
		return (0);

	/* Calculate the hash value */
	index = key_index(key, ht->size);

	/* Check if there is already a node with the same key */
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	/* Create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}

	/* Set key and next pointer of the new node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];

	/* Update the head of the array */
	ht->array[index] = new_node;

	return (1);
}
