/**
 * rev_string - reverses a given string
 *
 * @s: string variable to be reversed
 */

void rev_string(char *s)
{
	int len = strlen(s);

	for (int i = 0; i < len / 2; i++)
	{
		char tmp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
