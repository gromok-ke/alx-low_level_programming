#include <stdio.h>

/**
 * times_table - table of 9
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int k = i * j;

			printf("%d", k);

			if (k < 81)
			{
				printf(", ");
			}
		}

		printf("\n");
	}
}
