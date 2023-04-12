#include <stdio.h>
#include <stdlib.h>

/**
 * min_coins - returs the min coins
 *
 * @cents: cennts to be changed
 *
 * Return: always 0
 */

int min_coins(int cents)
{
	int coins = 0;

	if (cents < 0)
	{
		printf("%d\n", 0);

		return (0);
	}

	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}

	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}

	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}

	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}

	while (cents >= 1)
	{
		cents -= 1;
		coins++;
	}

	return (coins);
}


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
	int coins, cents;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	cents = atoi(argv[1]);
	coins = min_coins(cents);

	printf("%d\n", coins);

	return (0);
}
