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
		if (i == 90)
		{
			putchar('\n');
		}
		for (i = 97; i <= 122; i++)
		{
			putchar(i);
		}
		for (i = 65; i <= 90; i++)
		{
			putchar(i);
		}
	}
	return (0);
}
