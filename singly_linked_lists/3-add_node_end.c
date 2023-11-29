#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head : double pointer to the list_t list
 * @str : string to add in node
 *
 * Return: address of the new element or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int	i;
	list_t	*new_node;
	list_t	*current;

	new_node = malloc((sizeof(list_t)));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	;
	new_node->len = i;
/* set next node to NULL because it will be added to the end of the list*/
	new_node->next = NULL;
/* Check for empty list, if so updated the head ponter to pointer to new node*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
/* list not empty, iterate through the list to find last node */
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
/* update 'next'of the last node to the new node*/
	current->next = new_node;
	return (new_node);
}
