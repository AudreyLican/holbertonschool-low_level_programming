#include "lists.h"

/**
 * dlistint_len - function that return the number of elements
 * of a dlistint_t list.
 * @h : pointer to head of the list
 *
 * Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t	i = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
