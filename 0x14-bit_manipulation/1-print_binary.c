#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */

void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int mask;

	for (j = 63; j >= 0; j--)
	{
		mask = n >> j;

		if (mask & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
