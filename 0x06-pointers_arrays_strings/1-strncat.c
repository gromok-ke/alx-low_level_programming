#include <string.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from dest to choose
 *
 * Return: returns destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest + strlen(dest);

	while (**src && n--)
	{
		*p++ = *src++;
	}
	*p = '\0';

	return (dest);
}
