#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all possible combinations of 0-9
 *
 * Return: end point
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
