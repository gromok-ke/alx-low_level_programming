#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Iterating numbers
 *
 * Return: end point
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			/*print each digit as a character*/
			putchar(i + '0');
			putchar(j + '0');

			/*checks the last combination to be printed*/

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
