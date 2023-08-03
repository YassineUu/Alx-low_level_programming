#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit, binary;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);


	binary = n >> index;
	bit = binary & 1;

	return (bit);
}
