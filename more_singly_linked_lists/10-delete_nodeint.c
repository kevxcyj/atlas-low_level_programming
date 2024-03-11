#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at index
 * @head: Head
 * @index: Index
 *
 * Return: 1 or -1
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *lst = *head;
	listint_t *k = NULL;
	unsigned int i = 0;

		if (*head == NULL)
			return (-1);

		if (index == 0)
		{
			*head = (*head)->next;
			free(lst);
		return (1);
		}

		while (i < index - 1)
		{
			if (!lst || !(lst->next))
				return (-1);
		lst = lst->next;
		i++;
		}

	k = lst->next;
	lst->next = k->next;
	free(k);

return (1);
}
