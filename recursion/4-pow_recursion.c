#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: parameter
 * @y: parameter
 *
 * Return: -1
 **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return ( _pow_recursion(int x + 1));
	return (1);
}	
	
