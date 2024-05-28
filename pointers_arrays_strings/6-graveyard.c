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
	int i, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0; str[i] != '\0' || str[i] <= length; i++)
	{
		if (i % 1 == 0)
		{
			continue;
		}
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
