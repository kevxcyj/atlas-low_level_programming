#include "lists.h"

/**
 * add_nodeint - Adds new node at beginning
 * @head: Head of list
 * @n: Int
 *
 * Return: Address of new element
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lst;

	if (head == NULL)
		return (NULL);

lst = malloc(sizeof(listint_t));

	if (lst == NULL)
		return (NULL);

	lst->n = n;
	*head = lst;
return (lst);
}
