#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of two diagonals
 * @a: parameter
 * @size: parameter
 * Return: 0
 **/

void print_diagsums(int *a, int size)
{
	int b;

	unsigned int num, num2;

	num = 0;
	num2 = 0;

	for (b = 0; b < size; b++)
	{
		num += a[(size * b) + b];
		num2 += a[(size * (b + 1)) - (b + 1)];
	}

printf("%d, %d\n", num, num2);
}
