#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: 0 if equal, negative or positive if not equal
 */

int  _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
