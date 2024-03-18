#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index
 *
 * @head: Head
 * @index: Index
 *
 * Return: 1 or -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *i = *head;
	dlistint_t *k;
	unsigned int m;

	if (i != NULL)
		while (i->prev != NULL)
			i = i->prev;

	m = 0;

	while (i != NULL)
	{
		if (m == index)
		{
			if (m == 0)
			{
				*head = i->next;
				if (*head != NULL)
				(*head)->prev = NULL;
			}
			else
			{
				k->next = i->next;

				if (i->next != NULL)
					i->next->prev = k;
			}
			free(i);
			return (1);
		}
		k = i;
		i = i->next;
		m++;
	}

return (-1);
}
