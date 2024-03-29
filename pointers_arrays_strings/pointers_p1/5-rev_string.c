#include "main.h"

/**
 * rev_string- reverse a string
 *
 * @str: the string to reverse
 *
 * Return: reverse'd string
 *
 */

void rev_string(char *str)
{
	int len;
	int pos;
	char temp;

	len = _strlen(str);

	for (pos = 0 ; pos <= ((len / 2) - 1); pos++)
	{
		temp = str[pos];
		str[pos] = str[len - (pos + 1)];
		str[len - (pos + 1)] = temp;
	}

}


/**
 * _strlen - determine the length of a string
 *
 * @str : the string to find the length of
 *
 * Return : the length of the string
 *
 */

int _strlen(char *str)
{
	int pos = 0;

	while (str[pos] != 0)
		pos++;

	return (pos);
}
