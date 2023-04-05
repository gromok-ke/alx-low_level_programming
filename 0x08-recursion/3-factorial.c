/**
 * factorial - returns factorial of a given integer value
 *
 * @n: pointer to int variable
 *
 * Return: 1 if *n = 0 else the factorial
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
