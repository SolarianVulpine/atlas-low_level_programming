#include "main.h"

/**
 *
 * print_numbers : prints the digits 0 through 9
 *
 */

void print_numbers(void)

{
	char digit;
	
	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar("%d\n", digit);
	}

}
