#include "main.h"

/**
 * void _puts_recursion - prints a passed string to the std output
 *
 * @s: pointer to string s
 *
 * Return: ends the programe
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return ();
		_putchar('\n');
	}

	_puts_recursion(*s);
	_putchar(s + 1);
}
