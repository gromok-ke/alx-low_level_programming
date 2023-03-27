/**
 * swap_int - swaps the value of two int type variables.
 *
 * @a: integer one
 * 
 * @b: integer two
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
