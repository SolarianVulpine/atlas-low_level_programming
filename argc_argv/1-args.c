#include <stdio.h>

/**
 * main - this is a function that prints the number of arguments
 *
 * @argc: the number of arguments
 * @argv: the array the carries the values of each argument
 *
 * Return: zero upon success
 */

int main(int argc, char* argv[])
{
    (void) argv;
    printf("%d\n", argc - 1);
    return(0);
}