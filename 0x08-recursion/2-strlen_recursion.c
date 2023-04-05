/**
 * _strlen_recursion - return len of a string
 *
 * @s: pointer to string variable
 *
 * Return: 0 if end of string else return len of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
