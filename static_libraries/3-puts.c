#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a sting
 *
 * @str: string
 *
 * Return: 0
 **/

void _puts(char *str)
{
	while (*str)
	putchar (*str++);

putchar('\n');
}
