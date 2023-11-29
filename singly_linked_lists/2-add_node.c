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
	list_t	*new_node;
	unsigned int	length;

	/* Creating new node and allocate memory */
	new_node = malloc((sizeof(list_t)));
	if (new_node == NULL)
		return (NULL);

	/* duplicate the string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (length = 0; str[length]; length++)
	;
	new_node->len = length;
	/* adding the new node at the beginning of the list*/
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
