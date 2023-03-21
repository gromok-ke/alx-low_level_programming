#include <unistd.h>

/**
 * _putchar - prints a single character to the console
 *
 * Description: This code defines implementation of _putchar function
 *
 * @c: parameter that is taken as input character in _putchar
 *
 * Return: returns number of bytes written by write function
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet_x10 - function to print alphabets 10x when called
 *
 */

void print_alphabet_x10(void)
{
	char i = 0, j;

	while (i < 10)
	{
		j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}

		_putchar('\n');
		j++;
	}
}
