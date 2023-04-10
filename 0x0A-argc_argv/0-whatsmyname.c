#include <stdio.h>

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
	int __attribute__((unused)) number_of_arguments = argc;

	printf("%s\n", argv[0]);

	return (0);
}
