#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table
 * @ht: Pointer
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *t = ht;
	hash_node_t *node, *list;
	unsigned long int k;

	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			node = ht->array[k];
			while (node != NULL)
			{
				list = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = list;
			}
		}
	}
free(t->array);
free(t);
}
