#include "main.h"
/**
 * _strdup - Returns a pointer to a newly allocated space
 * @str: parameter
 *
 * Return: 0
 **/

char *_strdup(char *str)
{
	char *k;
	int a = 0;
	int b;
	
	if (str == NULL)
		return (NULL);

	for (b = 0; str[b] != '\0'; b++)
		a++;

	k = malloc(sizeof(char) * a + 1 );

	if (k == NULL)
		return (NULL);

	for (b = 0; str[b] != '\0'; b++)
		k[b] = str [b];


return (k);
}
