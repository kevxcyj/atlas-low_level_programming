#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with the key
 * @ht: Pointer
 * @key: Key
 *
 * Return: Value or NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
		unsigned long int i;
		hash_node_t *t;

		if (ht == NULL || key == NULL || *key == '\0')
			return (NULL);

		i = key_index((const unsigned char *) key, ht->size);

		if (i >= ht->size)
			return (NULL);

		t = ht->array[i];

		while (t && strcmp(t->key, key) != 0)
			t = t->next;

return ((t == NULL) ? NULL : t->value);
}
