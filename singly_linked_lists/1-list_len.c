#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h : pointer to the list
 *
 * Return: the number of list printed
*/
size_t list_len(const list_t *h)
{
	unsigned int	counter = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			return (0);
		}
		h = h->next;
		counter++;
	}
	return (counter);
}
