#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: always 0
 */

int print_alphabet(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++) 
	{
	for (i = 'a'; i <= 'z'; i++) 
	{
		_putchar(i);
	}
	_putchar('\n');
	}
	return (0);
}
