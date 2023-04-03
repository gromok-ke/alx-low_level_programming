#include "main.h"

/**
 * _memcpy - copies memory to a specified location
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes to be copied
 *
 * Return: returns destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
		*d++ = *s++;
	return (dest);
}
