#include <ctype.h>

/**
 * string_toupper - convert lowecase to uppercase
 *
 * @str: pointer to string array
 *
 * Return: returns the string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		i++;
	}
	return (str);
}
