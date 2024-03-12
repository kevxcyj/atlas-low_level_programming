#include <unistd.h>

/**
 * _putchar - Writes the character C
 * @c: Char
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

