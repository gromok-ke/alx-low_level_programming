#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers 0 - 9
 *
 * Return: end point
 */

int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	putchar('\n');

	return (0);
}
