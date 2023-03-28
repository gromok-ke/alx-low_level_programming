#include <string.h>
#include "main.h"

/**
 * puts_half - prints second half of a string
 *
 * @str: string variable
 */

void puts_half(char *str)
{
	int len = strlen(str), i;
	int half_len = len / 2;
	int start_index = len % 2 == 0 ? half_len : half_len + 1;

	for (i = start_index; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
