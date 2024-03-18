#include "lists.h"
/**
 * add_dnodeint - Adds new node at beginning of list
 * @n: Parameter
 * @head: Head
 *
 * Return: Address of new element or NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *i;
	dlistint_t *k;

	i = malloc(sizeof(dlistint_t));

	if (i == NULL)
		return (NULL);

	i->n = n;
	i->prev = NULL;
	k = *head;

	if (k != NULL)
		k->prev = i;

	*head = i;

return (i);
}
