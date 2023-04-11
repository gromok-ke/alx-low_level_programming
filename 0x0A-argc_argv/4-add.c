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
	int i;
	unsigned int  j, sum;
	char *str;

	sum = 0;

        if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		str = argv[i];

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");

				return (1);
			}
		}

		sum += atoi(str);
		str++;
	}
	printf("%d\n", sum);

	return (0);
}
