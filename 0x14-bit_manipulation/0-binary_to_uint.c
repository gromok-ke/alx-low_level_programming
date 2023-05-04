#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - onverts a binary number to an unsigned int.
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: he converted number, or 0 if there is an invalid
 * character in the string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			result <<= 1; /*left shift result by 1*/
			result += (*b - '0'); /*add the current bit to result*/
			b++; /*move to the next bit*/
		}
		else
			return (0);
	}

	return (result);
}
