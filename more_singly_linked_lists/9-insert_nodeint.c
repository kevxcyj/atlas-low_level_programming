#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node
 * @head: First node
 * @idx: Index
 * @n: Parameter
 *
 * Return: Node or NULL
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *lst;
	listint_t *k = *head;
	unsigned int i;

	lst = malloc(sizeof(listint_t));

	if (!lst || !head)
		return (NULL);

	lst->n = n;
	lst->next = NULL;

	if (idx == 0)
	{
		lst->next = *head;
		*head = lst;
	return (lst);
	}

	for (i = 0; k && i < idx; i++)
	{
		if (i == idx - 1)
		{
			lst->next = k->next;
			k->next = lst;
		return (lst);
		}
	else
	k = k->next;
	}

return (NULL);
}

