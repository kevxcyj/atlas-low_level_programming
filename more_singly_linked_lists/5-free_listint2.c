#include "lists.h"
/**
 * free_listint2 - Frees list
 * @head: Head of list
 *
 * Return: 0
 **/

void free_listint2(listint_t **head)
{
	listint_t *lst;

	if (head == NULL)
		return;

	while (*head)
	{
		lst = (*head)->next;
		free(*head);
		*head = lst;
	}

	*head = NULL;
}
