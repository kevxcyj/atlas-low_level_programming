#include "lists.h"

/**
 * add_node_end - Adds new node to list
 * @head: Pointer
 * @str: String
 *
 * Return: Pointer
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list, *new;

	if (str == NULL)
		return (NULL);

	list = malloc(sizeof(list_t));

	if (list == NULL)
		return (NULL);

	list->str = strdup(str);

	if (list->str == NULL)
	{
		free(list);
		return (NULL);
	}

	list->len = _strlen(list->str);
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (list);
	}
	new = *head;
	while (new->next)
		new = new->next;
	new->next = list;

return (list);
}

/**
 * _strlen - Returns lenght of str
 * @c: string
 * @s: Parameter
 *
 * Return: lenght
 **/

int _strlen(const char *s)
{
	const char *c = s;

	while (*c != '\0')
	{
		c++;
	}

	return (c - s);
}
