#include <string.h>
#include "main.h"

/**
 * puts2 - print every other character of a string
 *
 * @str: string variable
 */

void puts2(char *str)
{
	int len = strlen(str), i;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
