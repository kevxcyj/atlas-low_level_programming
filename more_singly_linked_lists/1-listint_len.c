#include "lists.h"

/**
 * listint_len - Returns the # of elements
 * @h: parameter
 *
 * Return: # of elements
 **/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
	i++;
	}
return (i);
}
