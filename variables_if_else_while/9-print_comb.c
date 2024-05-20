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
		for (i = 48; i <= 57; i++)
		{
			//if (i != 57)
			//{
			putchar(i);
			if (i == 57)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
			//}
			//else if (i == 57)
			//{
			//	putchar(i);
			//}
		}

		putchar('\n');
	}

	return (0);
}
