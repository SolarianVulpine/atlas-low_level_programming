#include <stdio.h>

/**
 * main - entry point of my function
 *
 * Description: This code prints the alphabet using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	i = 0;

	{
		for (i = 122; i >= 97; i--)
		{
			putchar(i);
		}
		putchar('\n');
	}
	return (0);
}
