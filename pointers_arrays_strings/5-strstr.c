#include "main.h"
/**
 * _strstr - Finds the first occurrence of the substring needle in the string haystack
 *
 *
 * Return: A pointer to the beginning of the located substring, or NULL if not found
 **/

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[b + a] != needle[b])
				break;
		}
			if (!needle[b])
				return (&haystack[a]);
	}
return (0);
}
