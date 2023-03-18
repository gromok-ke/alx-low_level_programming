#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print base 16 numbers in lowercase
 *
 * Return: end point
 */

int main(void)
{
	int i;
	char j = 'a';

	/*print numbers in char form using putchar*/

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}

	while (j <= 'f')
	{
		putchar(j);
		j++;
	}

	putchar('\n');

	return (0);
}
