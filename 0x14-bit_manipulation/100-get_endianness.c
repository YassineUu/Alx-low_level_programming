#include "main.h"

/**
 * get_endianness - checks if multibyte data is the endianness
 * Return: if big-endian 0 , or -1 if not
 */
int get_endianness(void)
{
	int number = 1;
	char *edns = (char *)&number;

	if (*edns == 1)
		return (1);
	return (1);
}
