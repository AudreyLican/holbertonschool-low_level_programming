#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a list_t list.
 * @head : double pointer to the list_t list
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t	*temp = head->next;

		free(head);
		head = temp;
	}
}
