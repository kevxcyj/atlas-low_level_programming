#include "hash_tables.h"
/**
 * hash_table_print - Prints hash table
 * @ht: Pointer
 *
 * Return: Hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *t;
	unsigned char i = 0;
	unsigned long int k;

	if (ht == NULL)
		return;

	printf("{");

	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			if (i == 1)
				printf(", ");

			t = ht->array[k];
			while (t != NULL)
			{
				printf("'%s': '%s' ", t->key, t->value);
				t = t->next;

				if (t != NULL)
					printf(", ");
			}
			i = 1;
		}
	}
	printf("}\n");
}
