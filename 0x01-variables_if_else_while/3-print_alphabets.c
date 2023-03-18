#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * Description: print alpabet lowercase then uppercase
 *
 * Return: End point to the program shoul be 0
 */

int main(void)
{
	char lower_case, upper_case;

	lower_case = 'a';

	upper_case = 'A';

	/*prints lowercase a-z*/

	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}

	/*prints uppercase A-Z*/

	while (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}

	putchar('\n');

	return (0);
}
