#include "main.h"

/**
 * print_rev - print string in reverse to std output
 * @s: string variable
 */

void print_rev(char *s)
{
	while (*s < '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
