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
	{
		while(i != 90)
		{
			for(i = 97, i <= 122, i++)
			{
				putchar('i');
			}
			for(i = 65, i <= 90, i++)
			{
				putchar('i');
			}
		}
		if(i == 90)
		{
			putchar('\n');
		}
	}
		return (0);
}
