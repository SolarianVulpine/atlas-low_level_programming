#include <stdio.h>

/**
 * main - prints 0-100, multipls of 3 are fizz multipls of 5 are buzz mltpls of both are fizzbuzz
 *
 * Return 0 on success
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz\n");
		else if (n % 3 == 0)
			printf("Fizz\n");
		else if (n % 5 == 0)
			printf("Buzz\n");
		else
			printf("%d",n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
