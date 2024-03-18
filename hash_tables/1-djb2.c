#include "hash_tables.h"
/**
 * hash_djb2 - Implements the djb2 algorithm
 * @str: String
 *
 * Return: Hash
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	int i;
	unsigned long int k = 5381;

	while ((i = *str++))
		k = ((k << 5) + k) + i;

return (k);
}
