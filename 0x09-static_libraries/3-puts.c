#include "main.h"
#include<stdio.h>

/**
 * _puts - print a string to the console
 *
 * @str: string to be printed
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}

	putchar('\n');
}
