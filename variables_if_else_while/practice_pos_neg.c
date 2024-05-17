#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: this code should determine whether n is pos or neg
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	printf("Please enter a number\n");
	scanf("%d", &n);

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
