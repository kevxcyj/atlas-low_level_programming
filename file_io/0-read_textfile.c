#include "main.h"
/**
 * read_textfile - Reads a text file and prints
 * @filename: File name 
 * @letters: Letters
 *
 * Return: # of letters
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t d;
	ssize_t e;
	ssize_t f;

	d = open(filename, O_RDONLY);

	if (d == -1)
		return (0);

	c = malloc(sizeof(char) * letters);
	f = read(d, c, letters);
	e = write(STDOUT_FILENO, c, f);

	free(c);
	close(d);
return (e);
}
