#include "main.h"

/**
 * main - Prints the alphabet in lowercase using only _putchar.
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
