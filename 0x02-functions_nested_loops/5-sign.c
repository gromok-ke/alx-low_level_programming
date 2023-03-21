/**
 * print_sign - prints the sign of an int either +, - or 0
 *
 * @n: the int to be checked
 *
 * Return: 1 if positive, 0 if zero and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf('+');

		return (1);
	}

	else if (n == 0)
	{
		printf('0');

		return (0);
	}

	else if (n < 0)
	{
		printf('-');

		return (-1);
	}
}
