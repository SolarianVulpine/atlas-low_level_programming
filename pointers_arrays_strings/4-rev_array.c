#include "main.h"
#include <string.h>

/**
 * reverse_array - aims to reverse the order of integers within an array
 *
 * @a: the array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, j;

	j = 0;
	n--;

	while (j < n)
	{
		temp = a[n];
		a[n] = a[j];
		a[j] = temp;
		j++;
		n--;
	}
}
