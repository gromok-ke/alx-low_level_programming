#include <stdio.h>

/**
 * print_last_digit - prints the last digit of an int value
 *
 * @n: int value to be checked
 *
 * Return: returns the last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	printf("%2d", last_digit);

	return (last_digit);
}
