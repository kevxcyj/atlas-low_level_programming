#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints a name
 * @name: name
 * @f: parameter
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
