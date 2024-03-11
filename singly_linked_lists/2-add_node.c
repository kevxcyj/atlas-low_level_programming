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

	new->len = strlen(str);
	new->next = *head;
	*head = new;

return (new);
}

/**
 * _strlen - Returns lenght of str
 * @s: char
 *
 * Return: len
 **/

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
return (i);
}
