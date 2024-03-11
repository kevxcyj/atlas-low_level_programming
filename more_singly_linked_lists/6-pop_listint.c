#include "lists.h"
/**
 * pop_listint - Deletes the head node
 * @head: List
 *
 * Return: The head node
 **/

int pop_listint(listint_t **head)
{
	listint_t *lst;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	lst = (*head)->next;

	free(*head);
	*head = lst;

return (i);
}
