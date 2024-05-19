#include <stdio.h>

/**
 * main - the entry point to my code
 *
 * Description: intends to to print the numbers 0 - 9 separated by commas
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	i = 0;

	{
		while (i < 57)
		{
			for (i = 48; i <= 57; i++)
			{
				putchar(i);
				putchar(',');
				putchar(' ');
			}
		}
	return (0);
}
