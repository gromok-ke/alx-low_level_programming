#include "main.h"

/**
 * print_rev - print string in reverse to std output
 * @s: string variable
 */

void print_rev(char *s)
{
	/*Find the end of the string*/
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	/*Output character in reverse*/
	while (end > s)
	{
		end--;
		_putchar(*end);
	}
	/*Output newline character*/
	_putchar('\n');
}
