#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 *
 * @n: start of input variables
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	/* initialize the argument list from the start */
	va_start(list, n);

	/* iterate through all parameter values */
	for (i = 0; i < n; i++)
		/* get the next parameter value and add it to sum */
		sum += va_arg(list, int);
	/* Clean up */
	va_end(list);

	return (sum);
}
