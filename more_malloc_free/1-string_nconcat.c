#include "main.h"
/**
 * string_nconcat - Concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 *
 * Return: Newly allocated space
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (c = 0; s1[c] != '\0'; c++)
		a++;
	for (c = 0; s2[c] != '\0'; c++)
		b++;

pointer = malloc(sizeof(char) * (a + n) + 1);

	if (pointer == NULL)
		return (NULL);

	if (n >= b)
	{
		for (c = 0; s1[c] != '\0'; c++)
			pointer[c] = s1[c];
		for (c = 0; s2[c] != '\0'; c++)
			pointer[a + c] = s2[c];
		pointer[a + c] = '\0';
	}
	else
	{
		for (c = 0; s1[c] != '\0'; c++)
			pointer[c] = s1[c];
		for (c = 0; c < n; c++)
			pointer[a + c] = s2[c];

		pointer[a + c] = '\0';
	}
return (pointer);
}
