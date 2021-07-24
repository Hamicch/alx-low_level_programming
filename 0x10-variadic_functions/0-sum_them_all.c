#include <stdarg.h>

/**
 * sum_them_all - Sum of all its parameters
 * @n: Total number of parameters
 * Return: Sum of value parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int count = 0;
	va_list args;
	int total;

	if (n == 0)
		return (count);

	total = va_arg(args, int);

	va_start(args, n);

	for (i = 0; i < n; i++)
		count += total

	va_end(args);

	return (count);
}
