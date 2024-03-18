#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node
 * @idx: Index
 * @n: Parameter
 * @h: Head
 *
 * Return: Address of new node or NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *i;
	dlistint_t *k;
	unsigned int m;

	i = NULL;
	if (idx == 0)
		i = add_dnodeint(h, n);
	else
	{
		k = *h;
		m = 1;
		if (k != NULL)
			while (k->prev != NULL)
				k = k->prev;
		while (k != NULL)
		{
			if (m == idx)
			{
				if (k->next == NULL)
					i = add_dnodeint_end(h, n);
				else
				{
					i = malloc(sizeof(dlistint_t));
					if (i != NULL)
					{
						i->n = n;
						i->next = k->next;
						i->prev = k;
						k->next->prev = i;
						k->next = i;
					}
				}
				break;
			}
			k = k->next;
			m++;
		}
	}
return (i);
}
