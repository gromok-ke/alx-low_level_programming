#include <stdio.h>

/**
 * jack_bauer - prints time from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	for (int hr = 0; hr <= 23; hr++)
	{
		for (int min = 0; min <= 59; min++)
		{
			printf("%02d:%02d", hr, min);
			printf("\n");
		}
	}
}
