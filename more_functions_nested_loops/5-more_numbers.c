#include "main.h"

/**
 * void more_numbers - will print 10 times the digits 0-14
 */

void more_numbers(void)

{
	int i;

	for (i = 0; i <= 14; i++)
		_putchar(i * 10);

	_putchar('\n');
}
