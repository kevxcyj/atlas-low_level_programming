#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* This runs the program to assign a random number
 * to the variable n each time it is executed */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0);
}
