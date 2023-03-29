#include <string.h>

/**
 * _strncpy - copies two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from dest to choose
 *
 * Return: returns destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
