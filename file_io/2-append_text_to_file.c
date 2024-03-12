#include "main.h"
/**
 * append_text_to_file - Appends text at end of file
 * @filename: File name
 * @text_content: Text
 *
 * Return: -1, NULL, --1
 **/

int append_text_to_file(const char *filename, char *text_content)
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

	i = open(filename, O_WRONLY | O_APPEND);
	k = write(i, text_content, l);

	if (i == -1 || k == -1)
		return (-1);

	close(i);

return (1);
}
