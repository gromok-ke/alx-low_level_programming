/**
 * _isupper - checks for uppercase characters
 *
 * @c: character to be checked
 *
 * Return: 1 if True, 0 if False
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
