#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times followed
 *                      by a new line.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
