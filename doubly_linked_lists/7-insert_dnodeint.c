#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 *		at a given position.
 * @h : double pointer to the dlistint_t list
 * @idx : the index of the list where the new node should be added
 * @n : the value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_dnode, *current_node;
	unsigned int	i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current_node = *h;
	for (i = 0; *h && i < idx - 1; i++)
	{
		if (current_node == NULL)
			return (NULL);
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (NULL);

	new_dnode = malloc(sizeof(dlistint_t));
	if (new_dnode == NULL)
		return (NULL);

	new_dnode->n = n;
	new_dnode->prev = current_node;
	new_dnode->next = current_node->next;

	if (current_node->next != NULL)
		current_node->next->prev = new_dnode;

	current_node->next = new_dnode;
	return (new_dnode);

	if (*h == NULL || i != idx)
	{
		free(new_dnode);
		return (NULL);
	}
}
