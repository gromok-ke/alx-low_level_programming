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
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
