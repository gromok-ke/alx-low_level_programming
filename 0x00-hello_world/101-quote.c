/*101-quote.c:printing a string without puts or printf*/

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program will print out a value'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Mystring[100];

	sprintf(Mystring, "and that piece of art is useful\"- Dora Korpar, 2015-10-19");
	printf("%s\n", Mystring);

	return (1);
}
