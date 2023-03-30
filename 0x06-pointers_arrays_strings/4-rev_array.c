#include "main.h"

/**
 * reverse_array - reverses a string
 *
 * @a: pointer to string array
 *
 * @n: number of elements in the aray
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
