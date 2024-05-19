#include <stdio.h>

/**
 * main - the entry point of my code
 *
 * Description: this code will print the numbers 0 through 9
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
	putchar('\n');

	return (0);
}
