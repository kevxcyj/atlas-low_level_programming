#include "lists.h"

/**
 * print-list - Prints all the elemts of a list_t list
 * @h: list
 *
 * Return: Number of nodes
 **/

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("{0} (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	i++;
	h = h->next;
	}
return (i);
}
