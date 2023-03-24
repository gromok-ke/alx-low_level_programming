#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print 10 times numbers 0 - 14
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		for (int j = 0; j <= 14; j++)
		{
			printf("%d", j);
		}
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
