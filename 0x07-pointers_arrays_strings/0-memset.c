#include "main.h"
/**
 * _memcpy - copies a block of memory from one location to another
 *
 * @s: destination location
 * @b: source location
 * @n: number of bytes to fill
 *
 * Return: returns the copied memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return s;
}
