#include "main.h"

/**
 * swap_int - will swap two ints
 *
 * @a : Pointer to first int
 *
 * @b : Pointer to second int
 */

void swap_int(int *a, int *b)
{
	/* will make a temporary variable to swap values */
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
