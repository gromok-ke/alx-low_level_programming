#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of characters
 *
 * @size: number of characters to allocate
 * @c: character to initialize the array with
 *
 * Return: Null if fail else return the array
 */

char *create_array(unsigned int size, char c)
{
	/*Allocate memory for the array*/
	char *arr = (char*) malloc(size * sizeof(char));
	unsigned int i;

	if (arr == NULL)
	{
		return (NULL);
	}

	/*Initialize the array with the spesified charater*/
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
