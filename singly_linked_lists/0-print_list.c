#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list>
 * @h : pointer to the list
 *
 * Return: the numer of node printed
*/
size_t print_list(const list_t *h)
{
	size_t	i;

	i = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
