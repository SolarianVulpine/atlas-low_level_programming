#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function will multiply two numbers
 *
 * @argc: how many args
 * @argv: array of arg values
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
int i;
int k;

if (argc != 3)
{
printf("Error\n");
return (1);
}

i = atoi(argv[1]);
k = atoi(argv[2]);
printf("%d\n", i *k);

return (0);
}
