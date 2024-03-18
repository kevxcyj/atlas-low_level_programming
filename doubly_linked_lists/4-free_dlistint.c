#include "lists.h"
/**
 * free_dlistint - Frees a list
 * @head: Head
 *
 * Return: 0
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

		if (head != NULL)

			while (head->prev != NULL)
				head = head->prev;

	while ((list = head) != NULL)
	{
		head = head->next;
		free(list);
	}
}
