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

	if(argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		j = atoi(argv[1]);
		k = atoi(argv[2]);
		printf("%d\n", j * k);
		return (0);
	}
}
