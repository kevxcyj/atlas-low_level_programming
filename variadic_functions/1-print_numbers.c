#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Prints numbers
 * @separator: parameter
 * @n: parameter
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(ap, int));
			printf("%s", separator);
		}
		else
			printf("%d", va_arg(ap, int));
	}
	putchar('\n');
	va_end(ap);
}
