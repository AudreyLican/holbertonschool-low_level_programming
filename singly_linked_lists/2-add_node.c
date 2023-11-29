#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 * of a list_t list.
 * @head : double pointer to the list_t list
 * @str : string to add in node
 *
 * Return: adress to the new elements or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t	*new;

	/* Creating new node and allocate memory */
	new = (list_t *)malloc((sizeof(list_t)));
	if (new == NULL)
		return (NULL);

	/* duplicate the string */
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	/* adding the new node at the beginning of the list*/
	new->next = *head;
	*head = new;

	return (new);
}
