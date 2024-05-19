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
		for (i = 97; i <= 122; i++)
		{
			if (i == 113 || i == 101)
			{
				continue;
			}
			putchar(i);
		}
		putchar('\n');
	}
	return (0);
}
