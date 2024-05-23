#include <stdio.h>
#include "main.h"

/**
 * main - the entry point of my fizzbuzz program
 *
 * Description: this code should print nums 1 to 100
 * printing "Fizz" on a multiple of 3 and "Buzz" on a multiple of 5
 * will print "FizzBuzz" on a shared multiple, followed by "\n"
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
		if (1 == 100)
		{
			continue;
		}
	}
	printf("\n");
	return (0);
}
