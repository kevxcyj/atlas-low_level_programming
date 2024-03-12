#include "main.h"
/**
 * create_file - Creates file
 * @filename: File name
 * @text_content: Text
 *
 * Return: -1 or --1
 **/

int create_file(const char *filename, char *text_content)
{
	int i;
	int k;
	int l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(i, text_content, l);

	if (i == -1 || k == -1)
		return (-1);

	close(i);

return (1);
}

