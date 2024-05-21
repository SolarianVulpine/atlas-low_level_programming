#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - main entry point of the program
 *
 * Description: this code should print the last digit of a provided number
 *
 * @i: the number to be checked
 *
 * Return: the value of the last digit
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
	{
		j = -j;
	}

	_putchar(j + '0');

	return (j);
}
