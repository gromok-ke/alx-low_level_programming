#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'print whether no. stored in @n is positive or negative'
 * @n - stores different values everytime its run
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
		printf("%d is positive\n", n);

	else if (n == 0)
		printf("%d is zero\n", n);

	else
		printf("%d is negative\n", n);

	return (0);
}
