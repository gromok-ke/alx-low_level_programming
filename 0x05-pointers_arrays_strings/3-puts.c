#include "main.h"

/**
 * _puts - print string to std output
 * @str: string variable
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str); /*Output each character*/
		str++; /*move to the next character*/
	}
	_putchar('\n'); /*Output newline character*/
}
