#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of byte
 *
 * @s: pointer to a null-terminated string s
 * @accept: pointer to a null-terminated stringcaccept
 *
 * Return: returns a pointer to the byte in s that matches accept
 */

char *_strpbrk(char *s, char *accept)
{
	char *p1, *p2;

	for (p1 = s; *p1 != '\0'; ++p1)
	{
		for (p2 = accept; *p2 != '\0'; ++p2)
		{
			if (*p1 == *p2)
				return (p1);
		}
	}
	return (NULL);
}
