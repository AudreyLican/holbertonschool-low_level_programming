#include "lists.h"

/**
 * delete_dnodeint_at_index - that deletes the node at index
 *		of a dlistint_t linked list.
 * @head : double pointer to the dlistint_t list
 * @index : the index of the list where the new node should be added
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int	i;
	dlistint_t	*currentn, *prevn;

	if (!(*head))
		return (-1);

	currentn = *head;

	if (index == 0)
	{
		*head = currentn->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(currentn);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		prevn = currentn;
		currentn = currentn->next;
		if (currentn == NULL)
			return (-1);
	}
	prevn->next = currentn->next;
	if (currentn->next != NULL)
		currentn->next->prev = prevn;

	free(currentn);
	return (1);
}
