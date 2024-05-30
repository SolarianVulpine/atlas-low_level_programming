#include "main.h"

/**
 * swap_int - will swap the values of two provided integers
 *
 * Description: created a new variable to temporarily hold
 * the value while the value is in transit to the other pointer
 *
 * @a: the first integer provided
 * @b: the second integer provided
 *
 * Return: always 0 on success
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
