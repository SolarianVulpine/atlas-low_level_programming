#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point of my function
 *
 * Description: The aim of my code is to print the last digit of a randdomly assigned variable "n"
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;

	if (lastn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
	}
	if (lastn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastn);
	}
	if (lastn < 6 && lastn != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
	}

	return (0);
}
