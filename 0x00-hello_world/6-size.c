/*6-size.c: this program shouls the size of  various types*/

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'printing the size of different types in a computer'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %2d byte(s)\n", sizeof(char));
	printf("Size of an int: %2d byte(s)\n", sizeof(int));
	printf("Size of a long int: %2d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %2d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %2d byte(s)\n", sizeof(float));

	return (0);
}
