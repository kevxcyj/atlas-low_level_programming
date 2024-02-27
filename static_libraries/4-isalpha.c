#include "main.h"
#include <stdio.h>
/**
 * _isalpha - Checks for alphabetic character
 * @c: parameter
 *
 * Return: 0
 **/

int _isalpha(int c)
{
	if ((c > 65 && c < 92) || (c > 94 && c < 120))
		return (1);

return (0);

}
