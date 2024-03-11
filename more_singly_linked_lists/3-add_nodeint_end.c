#include "lists.h"

/**
 * add_nodeint_end - Adds node at end
 * @head: head of list
 * @n: parameter
 *
 * Return: Pointer to node
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lst;
	listint_t *i = *head;

	lst = malloc(sizeof(listint_t));
	if (!lst)
		return (NULL);

	lst->n = n;
	lst->next = NULL;

	if (*head == NULL)
	{
		*head = lst;
			return (lst);
	}

	while (i->next)
		i = i->next;

	i->next = lst;

return (lst);
}
