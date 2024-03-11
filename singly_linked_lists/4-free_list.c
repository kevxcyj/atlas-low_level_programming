#include "lists.h"

/**
 * free_list - Release memory
 * @head - pointer
 *
 **/

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
