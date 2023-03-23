#include <stdio.h>

/**
 * print_times_table - table of n
 *
 * @n: table number
 */

void print_times_table(int n)
{
        int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int k = i * j;

				printf("%d", k);

				if (k < (n * n))
				{
					printf(", ");
				}

			}

			printf("\n");
		}
	}
}
