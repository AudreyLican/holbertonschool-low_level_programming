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
	size_t	counter;
	char	*listptr;

	listptr = h->str;

	counter = 0;
	while (h)
	{
		if (listptr == NULL)
		{
			return (0);
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
