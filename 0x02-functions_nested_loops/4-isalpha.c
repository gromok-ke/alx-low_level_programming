/**
 * _isalpha - checks if value is an alphabet.
 *
 * @c: value to be checked
 *
 * Return: 1 if true 0 if false
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
