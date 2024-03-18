#include "hash_tables.h"
/**
* hash_table_set - Adds an element to the hash table
* @ht: Pointer
* @value: Value
* @key: Key
*
* Return: -1 or 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *c;

	unsigned long int i, k;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	c = strdup(value);
	if (c == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	for (k = i; ht->array[k]; k++)
	{
		if (strcmp(ht->array[k]->key, key) == 0)
		{
			free(ht->array[k]->value);
			ht->array[k]->value = c;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(c);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = c;
	node->next = ht->array[k];
	ht->array[k] = node;

return (1);
}
