#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compares two strings
 * @s1: string
 * @s2: string
 *
 * Return: 0
 **/

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
{
	if (s2[a] != s1[a])
		return (s1[a] - s2[a]);
	}
return (0);
}
