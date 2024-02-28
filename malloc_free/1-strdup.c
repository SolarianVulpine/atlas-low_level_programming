#include <stdlib.h>

/**
 * _strdup - aims to duplicate string
 *
 * @str: string to duplicate
 *
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	char *dupStr;
	int j;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len])
	{
		len++;
	}

	dupStr = malloc(sizeof(char) * len + 1);

	if (dupStr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < len; j++)
	{
		dupStr[j] = str[j];
	}

	dupStr[j] = '\0';

	return (dupStr);
}
