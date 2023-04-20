#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sumk of all its parameters
 *
 * @n: number of arguments
 * @...: arguments
 *
 * Return: 0 if @n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
