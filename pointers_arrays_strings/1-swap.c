#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 *
 * @a: integer
 * @b: integer
 * 
 * Return: 0
 **/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}	
