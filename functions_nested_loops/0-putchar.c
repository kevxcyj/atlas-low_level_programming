#include "main.h"

int main(void)
{
	char main.h[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	unsigned int c;

	for (c = 0; c < sizeof(main.h); c++)
	{
		_putchar(main.h[c]);
	}
_putchar('\n');
return (0);
}
