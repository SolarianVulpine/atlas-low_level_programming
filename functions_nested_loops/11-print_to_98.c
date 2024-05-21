#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - main entry point of my file
 *
 * Description: Prints all numbers from provided number to 98
 *
 * @n: The provided starting point.
 *
 * Return: void or result unsure
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");

}
