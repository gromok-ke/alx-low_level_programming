#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int mask;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		mask = exclusive >> j;
		if (mask & 1)
			count++;
	}

	return (count);
}
