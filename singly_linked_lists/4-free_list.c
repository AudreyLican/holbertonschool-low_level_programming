#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * Description : we use a while loop to iterate through the list.
 *		In each iteration, we store the current node in a temporary
 *		variable temp, update the head pointer to the next node,
 *		and then free the memory occupied by temp.
 *		This process continues until we reach the end of the list
 *		(head becomes NULL).
 * @head : pointer to the fist element of the list
*/
void free_list(list_t *head)
{
	list_t	*temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
