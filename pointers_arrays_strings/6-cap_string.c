#include "main.h"
#include <stdio.h>
/**
 * cap_string - Capitalizes words in a string
 * @str: String
 *
 * Return: 0
 **/

char *cap_string(char *str)
{
	int k = 0;

	while (str[k])
	{
		while (!(str[k] >= 'a' && str[k] <= 'z'))
			k++;

		if (str[k - 1] == ' ' ||
		    str[k - 1] == '\t' ||
		    str[k - 1] == '\n' ||
		    str[k - 1] == ',' ||
		    str[k - 1] == ';' ||
		    str[k - 1] == '.' ||
		    str[k - 1] == '!' ||
		    str[k - 1] == '?' ||
		    str[k - 1] == '"' ||
		    str[k - 1] == '(' ||
		    str[k - 1] == ')' ||
		    str[k - 1] == '{' ||
		    str[k - 1] == '}')
		str[k] -= 32;
	}

return (str);
}
