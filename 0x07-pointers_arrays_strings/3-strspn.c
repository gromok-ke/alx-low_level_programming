/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: pointer to null-teminated str s
 * @accept: pointer to null-teminated str accept
 *
 * Return: returns final value of count
 */

unsigned in _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (count);
		}
	}
	return (count);
}
