#include "main.h"
/**
 * print_array - Prints elements of array of integers
 * @a: parameter
 * @n: parameter
 *
 * Return: 0
 **/



void print_array(int *a, int n)
{
	int inc;

for (inc = 0; inc < n ; inc++)
{
if (inc != n - 1)
printf("%d, ", a[inc]);
	else
		printf("%d", a[inc]);

}
printf("\n");
}
