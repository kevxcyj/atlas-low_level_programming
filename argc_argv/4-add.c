#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main function
 * @argc: count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int k = 0;

	if (argc > 1)
{
	for (i = 1; i <= (argc - 1); i++)
	
	{
		k = k + atoi(argv[i]);

	}
	printf("%d\n", k);
}

	if (argc == 1)
		printf("0\n");

return (0);

}
