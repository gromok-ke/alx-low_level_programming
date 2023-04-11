#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * @argc: number of command arguments
 * @argv: command line arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, num, sum;
        if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");

				return (1);
			}
		}

		num = atoi(argv[i]);
		sum = num += num;
	}
	printf("%d\n", sum);

	return (0);
}
