#include "lists.h"
/**
 * free_listint - Frees a list
 * @head: List
 *
 * Return: 0
 **/

void free_listint(listint_t *head)
{
	listint_t *lst;

	while (head)
	{
		lst = head->next;
		free(head);
		head = lst;
	}
}

