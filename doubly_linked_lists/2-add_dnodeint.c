#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 *		at the beginning of a dlistint_t list.
 * @header : double pointer to the dlistint_t list
 * @n : new element to add
 *
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t	*new_dnode;

	new_dnode = malloc(sizeof(dlistint_t));
	if (!new_dnode)
		return (NULL);

	new_dnode->n = n;

/*set next pointer of the new node*/
	new_dnode->next = *head;

/*set prev pointer of the new node*/
	new_dnode->prev = NULL;

/*set the prev pointer to the new node*/
	if (*head)
		(*head)->prev = new_dnode;

/*update the head pointer*/
	*head = new_dnode;

	return (new_dnode);
}
