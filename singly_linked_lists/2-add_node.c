#include "lists.h"

/**
 * add_node - Adds a new node
 * @head: Start of list
 * @str: parameter
 *
 * Return: Address of new element
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	new->len = _strlen(str);
	new->next = *head;
	*head = new;

return (new);
}

/**
 * _strlen - Returns lenght of str
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
