#include <stdio.h>

/**
 * main - aims to print the number of arguments minus the program name
 * @argc: int to determine num of arguments
 * @argv: array of char pointers to the arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	{
		printf("%d\n", argc -  1);
	}
	return  (0);
}
