#include "main.h"
/**
 * str_concat - Concatenates two strings
 * @s1: parameter
 * @s2: parameter
 *
 * Return: 0
 **/

char *str_concat(char *s1, char *s2)
{
	int a = 0:
	int b = 0;
	int c;
	char *d;

	if (s1 == NULL)
		s1 = "";
	if (s2 ==  NULL)
		s2 = "";
	
	for (c = 0; s1[c] != '\0'; c++)
		a++;
	for (c = 0; s2[i] != '\0'; c++)
		b++;

	d = malloc(sizeof(char) * (a + b) + 1);

	if (d == NULL)
		return (NULL);

}
