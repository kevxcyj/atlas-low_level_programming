#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node
 * @head: First node
 * @index: Index
 *
 * Return: Nth node or NULL
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *lst = head;
	unsigned int i = 0;

	while (lst && i < index)
	{
		lst = lst->next;
	i++;
	}

return (NULL);
}
