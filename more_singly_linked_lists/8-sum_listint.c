#include "lists.h"
/**
 * sum_listint - Returns the sum
 * @head: Head
 *
 * Return: Sum
 **/

int sum_listint(listint_t *head)
{
	listint_t *lst = head;
	int i = 0;

	while (lst)
	{
		i += lst->n;
		lst = lst->next;
	}

return (i);
}
