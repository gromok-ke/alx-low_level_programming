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
 * print_alphabet - function to print alphabets when called
 *
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}
