#include <stdio.h>
/**
 * jack_bauer - print hour and minute
 */

void jack_bauer(void)
{
	int hr = 0;

	while (hr <= 23)
	{
		int min = 0;

		while (min <= 59)
		{
			printf("%02d:%02d", hr, min);
			printf("\n");
		}
	}
}
