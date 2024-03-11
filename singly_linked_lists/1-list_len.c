#include "lists.h"

/**
 * list_len - Returns the # of elements
 * @h - list
 *
 * Return - # of elements
 **/

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
return (i);
}
