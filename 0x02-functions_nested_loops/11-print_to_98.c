#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints value until it reaches 98
 *
 * @n: starting number to be printed
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	_putchar('\n');
}
