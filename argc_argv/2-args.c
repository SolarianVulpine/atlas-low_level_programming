#include <stdio.h>

/**
 * main - aims to print all arguments divided by a new line
 * @argc: int to determine num of arguments
 * @argv: array of char pointers to arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
