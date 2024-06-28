#include <stdio.h>

/**
 * main - this is the function that prints the file's name
 *
 * @argc: a void parameter
 * @argv: the array the carries the values of each argument
 *
 * Return: zero upon success
 */

int main(int argc, char* argv[])
{
    (void) argc;
    printf("%s\n", argv[0]);
    return(0);
}