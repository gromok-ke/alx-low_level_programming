#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: number of command arguments
 * @argv: command line arguments
 *
 * Return: always 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
