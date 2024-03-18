#include "lists.h"
/**
 * add_dnodeint_end - Adds new node at end of line
 * @n: Parameter
 * @head: Head
 *
 * Return: Address of new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i;
	dlistint_t *k;

	k = malloc(sizeof(dlistint_t));

	if (k == NULL)
		return (NULL);

	k->n = n;
	k->next = NULL;

	i = *head;

	if (i != NULL)
	{
		while (i->next != NULL)
			i = i->next;
		i->next = k;
	}
	else
	{
		*head = k;
	}

	k->prev = i;

return (k);
}
