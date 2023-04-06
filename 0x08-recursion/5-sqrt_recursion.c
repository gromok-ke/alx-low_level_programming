/**
 * _sqrt_recursion_helper - helps _sqrt_recursion in calculating sqroot
 *
 * @n: number to look sqroot for
 * @start: starting point
 * @end: ending point
 *
 * Return: returns -1 id n < 0, n if n == 0 0r 1, returns sqrt of n
 */

int _sqrt_recursion_helper(int n, int start, int end)
{
	if (n < 0)
	{
	return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	if (start > end)
	{
		return (end);
	}

	int mid = (start + end) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}

	if (mid * mid < n)
	{
		return (_sqrt_recursion_helper(n, mid + 1, end));
	}
}

/**
 * _sqrt_recursion - returns the sqrt of any given number
 *
 * @n: number whose sqrt is being checked
 *
 * Return: returns the sqrt of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1, n));

}
