#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head : pointer to the list
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
