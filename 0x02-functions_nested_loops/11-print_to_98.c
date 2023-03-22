#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints value until it reaches 98
 *
 * @n: starting number to be printed
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n >= n && n <= 98)
		{
			printf("%d", n);

			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}

			n++;
		}
	}

	else if (n > 98)
	{
		while (n <= n && n >= 98)
		{
			printf("%d", n);

			if (n > 98)
			{
				_putchar(',');
				_putchar(' ');
			}

			n--;
		}
	}

	_putchar('\n');
}
