#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - main entry of this code
 *
 * Description: prints the 24 hr clock from 00:00 to 23:59
 *
 * Return: 0 on Success
 */

void jack_bauer(void)
{
	int H;
	int M;
	/*represents hours and minutes*/

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');

		}
	}

}
