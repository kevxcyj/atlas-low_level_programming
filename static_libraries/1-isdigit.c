#include <stdio.h>
#include "main.h"

/**
 *_isdigit - Checks for digits 0-9
 *@c:  fuction parameter
 *
 *Return: 0
 **/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
