#include <stdio.h>

/**
 * main - the entry point of my code
 *
 * Description: print the digits 0 - 9 followed by 'a' - 'b'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	i = 0;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
