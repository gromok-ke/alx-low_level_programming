#include <ctype.h>

/**
 * cap_string - capitalize each word
 *
 * @str: pointer to a string array
 *
 * Return: return str
 */

char *cap_string(char *str)
{
	int capitalize_nxt = 1;
	char *p = str;

	while (*p != '\0')
	{
		if (isspace(*p) || *p == ',' || *p == '.' || *p == '!' || *p ==
				'?' || *p == '"' || *p == '(' || *p == ')' ||
				*p == '{' || *p == '}')
		{
			capitalize_nxt = 1;
		}
		else if (capitalize_nxt)
		{
			*p = toupper(*p);
			capitalize_nxt = 0;
		}
		p++;
	}
	return (str);
}
