#include <string.h>

/**
 * _strcat - concatinate two string variables
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * Return: returns a pointer to the concatenaded string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest); /*pointer to end of dest str*/

	while (*src != '\0')
	{
		*ptr++ = *src++; /*append src str char to dest str*/
	}
	*ptr = '\0'; /*terminate the concatinated str with null char*/

	return (dest); /*return a pointer to the concatenated string*/
}
