#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node
 * @head: Head
 * @index: Index
 *
 * Return: Nth node or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	k = 0;

	while (head != NULL)
	{
		if (k == index)
			break;
		head = head->next;
		k++;
	}

return (head);
}
