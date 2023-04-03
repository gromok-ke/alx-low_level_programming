/**
 * _memcpy - copies a block of memory from one location to another
 *
 * @dest: destination location
 * @src: source location
 *
 * Return: returns the copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	const char *s = src;

	while (n--)
	{
		*d++ = *s++;
	}
	return dest;
}
