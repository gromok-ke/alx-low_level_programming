#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Iterating 3  numbers
 *
 * Return: end point
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				/*print each digit as a character*/
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				/*checks the last combination to be printed*/
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
