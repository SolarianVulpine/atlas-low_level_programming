#include "main.h"

/**
 *
 * print_numbers : prints the digits 0 through 9
 *
 */

void print_numbers(void)
	
{
	int i;

	for (i = '0'; i <= '9'; i++)
	
		{
			putchar("%d", i);
		}
	
	putchar("\n");

}
