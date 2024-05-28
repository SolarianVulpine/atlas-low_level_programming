#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a specified position of an array
 *
 * Description:
 *
 * @a: the provided array
 * @n: the specified location
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int pos;

	for (pos = 0; pos < n; pos++)
	{
		printf("%d", a[pos]);
		if (pos != (n - 1))
			printf(", ");
	}
	printf("\n");
}
