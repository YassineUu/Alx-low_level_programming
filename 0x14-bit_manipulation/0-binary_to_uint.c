#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsined int
 */
unsigned int binary_to_uint(const char *b)
{
	int a = 0, j;
	unsigned int number = 0, Nbinary = 0;

	if (b == NULL)
		return (Nbinary);

	while (b[a] != '\0')
		a++;
	a -= 1;
	j = 0;
	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
			return (Nbinary);

		if (b[j] == '1')
			number += (1 * (1 << a));
		j++;

		a--;
	}
	return (number);
}
