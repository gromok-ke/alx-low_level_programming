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
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(' ');
		}

		putchar('\n');

		return (0);
	}
}
