#include <stdio.h>
#include <stdlib.h>

/**
 * main - aims to multiply two numbers
 * @argc: count of arguments
 * @argv: array of values
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int j, k;

	(void)argc;
	j = atoi(argv[1]);
	k = atoi(argv[2]);

	if(argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", j * k);
		return (0);
	}
}
