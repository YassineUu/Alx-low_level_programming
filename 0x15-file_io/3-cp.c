#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fs_r, fs_w, r, a, b;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fs_r = open(argv[1], O_RDONLY);
	if (fs_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fs_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fs_r, buf, BUFSIZ)) > 0)
	{
		if (fs_w < 0 || write(fs_w, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fs_r);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a = close(fs_r);
	b = close(fs_w);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fs_r);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fs_w);
		exit(100);
	}
	return (0);
}
