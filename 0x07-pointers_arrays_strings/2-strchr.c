#include <stddef.h>

/**
 * _strchr - check for a character in a string
 *
 * @s: pointer to the string
 * @c: character to be checked
 *
 * Return: Null if not foung and the start of the character in string if found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s)
	}
	return (NULL);
}
