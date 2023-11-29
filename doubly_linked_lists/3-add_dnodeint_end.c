#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a list_t list.
 * @head : double pointer to the list_t list
 * @n : new element to add
 *
 * Return: adress to the new elements or NULL if it fails
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t	*new_dnode;
	dlistint_t	*temp;

	/*allocate memory for node*/
	new_dnode = malloc(sizeof(dlistint_t));
	if (new_dnode == NULL)
		return (NULL);

	/*assign date to new_dnode*/
	new_dnode->n = n;
	/*assign NULL tonext of new_dnode*/
	new_dnode->next = NULL;
	/* storing head node temporarily */
	temp = *head;

	/* if the linked list is empty*/
	if (*head == NULL)
	{
		new_dnode->prev = NULL;
		*head = new_dnode;
		return (new_dnode);
	}

	/*if the linked list is not empty, iterate to the list the end of the list*/
	while (temp->next != NULL)
		temp = temp->next;

	/*now the last node of the linked list is temp*/

	/*point the next of the last node (temp) to new_dnode*/
	temp->next = new_dnode;

	/*assign prev of new_dnode to temp*/
	new_dnode->prev = temp;

	return (new_dnode);
}
