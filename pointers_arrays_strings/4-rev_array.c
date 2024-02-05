#include "main.h"
#include <stdio.h>
/**
 *reverse_array - Reverses the content of an array of integers
 *a: array
 *n: string
 *
 * Return: 0
 **/

void reverse_array(int *a, int n)
{
	int c = 0;
	int b = 0;

	for (b = n - 1; b > n / 2; b--)
	{
		c = a[n - 1 - b];
	a[n - 1 - b] = a[b];
a[b] = c;
	}
}
