/**
 * _pow_recursion - returns x to the power of y
 *
 * @x: int value
 * @y: power of
 *
 * Return: return the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y % 2 == 0)
	{
		int result = _pow_recursion(x, y / 2);

		return (result * result);
	}

	else
	{
		int result = _pow_recursion(x, (y - 1) / 2);

		return (result * result * x);
	}
}
