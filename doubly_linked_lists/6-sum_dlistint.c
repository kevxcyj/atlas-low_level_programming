#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all data
 * @head: Head
 *
 * Return: Sum of data
*/

int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

				while (head != NULL)
				{
					i += head->n;
					head = head->next;
				}
	}

return (i);
}
