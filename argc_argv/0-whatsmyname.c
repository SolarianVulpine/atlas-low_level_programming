#include <stdio.h>

/**
 * main - aims to print the program name using argv array placement
 * @argc: int ustilizing argc
 * @argv: int array uti;izing argv
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argc;
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
