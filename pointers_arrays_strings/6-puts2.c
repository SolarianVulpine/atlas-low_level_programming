#include "main.h"

/**
 * puts2 - this program should print every other character
 *
 * Description: using the for loop we iterate through the string
 * using += 2 we print every other character by counting up by
 * 2 instead of by 1
 *
 * @str: the provided string
 *
 * Return: 0 upon success
 */

void puts2(char *str)
{
	int i, length;

	while (length != '\0')
	{
		length++;

		for (; str[i] <= length; i += 2)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
