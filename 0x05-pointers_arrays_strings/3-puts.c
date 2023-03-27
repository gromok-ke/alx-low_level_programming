#include "main.h"

/**
 * _puts - print string to std output
 * @str: string variable
 *
 * Return: return total number of characters
 */

void _puts(char *str)
{
	int count = 0; /*Initialize character count*/

	while (*str != '\0')
	{
		_putchar(*str); /*Output each character*/
		count++; /*Increment character count*/
		str++; /*move to the next character*/
	}
	_putchar('\n'); /*Output newline character*/
	count++; /*increment char count to include newline char*/

	return (count); /*Return total numberof char output*/
}
