#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing 0 -9 using putchar
 *
 * Return: End point
 */

int main(void)
{
	int i;

	/*print character corresponding to the current number*/

	for (i = 0; i < 10; i++)
	{
		putchar('0' +  i);
	}

	putchar('\n');

	return (0);
}
