#include <unistd.h>

/**
 * _putchar - Writes character C
 * @c: The character to print
 *
 * Return: 1 or -1
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
