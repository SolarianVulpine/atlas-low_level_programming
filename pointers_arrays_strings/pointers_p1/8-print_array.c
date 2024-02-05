#include <stdio.h>
#include "main.h"

/**
 * print_array - print up to a number of items from an array
 *
 * @num : the array to get the numbers from
 * @length : how many array items to print
 *
 * Return : nothing
 *
 */

void print_array(int *num, int length)
{
	int position;

	for (position = 0; position < length; position++)
	{
		printf("%d", num[position]);
		if (position != (length - 1))
			printf(", ");
	}
	printf("\n");
}
