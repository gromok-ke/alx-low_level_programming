#include <stdio.h>
/**
 * jack_bauer - print hour and minute
 */

void jack_bauer(void)
{
	int hr;

	for (hr = 0; hr <= 23; hr++)
	{
		int mins;

		for (mins = 0; mins <= 59; mins++)
		{
			printf("%02d:%02d", hr, mins);
			printf("\n");
		}
	}
}
