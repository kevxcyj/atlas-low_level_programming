#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum
 * @a: parameter
 * @b: parameter
 *
 * Return: the sum
 **/
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - difference
 * @a: parameter
 * @b: parameter
 *
 * Return: the difference
 **/
int op_sub(int a, int b)
{ 
	return (a - b);
}


/**
 * op_mul - product
 * @a: parameter
 * @b: parameter
 *
 * Return: the product
 **/
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Divides
 * @a: parameter
 * @b: parameter
 *
 * Return: result
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(1000);
	}
return (a / b);
}


/**
 * op_mod - Remainder of div
 * @a: parameter
 * @b: parameter
 *
 * Return: the remainder
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
return (a % b);
}







