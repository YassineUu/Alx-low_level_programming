#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: name of the file to be read
 * @letters: number of letters toread and print
 *
 * Return: the number of letters printed, or 0 of uit failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fs;
	int a, b;
	char *buf;


	if (!filename)
		return (0);

	fs = open(filename, O_RDONLY);
	if (fs < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	a = read(fs, buf, letters);
	if (a < 0)
	{
		free(buf);
		return (0);
	}
	buf[a] = '\0';

	close(fs);

	b = write(STDOUT_FILENO, buf, a);
	if (b < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (b);
}
