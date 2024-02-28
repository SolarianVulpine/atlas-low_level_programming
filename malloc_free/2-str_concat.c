#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 *
 * @s1: string
 * @s2: 2nd string
 *
 * Return: pointer to new allocated concatenated string,
 *         or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	size_t len_s1 = (s1 == NULL) ? 0 : strlen(s1);
	size_t len_s2 = (s2 == NULL) ? 0 : strlen(s2);

	cat = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (cat == NULL)
	{
		return (NULL); 
	}

	if (s1 != NULL)
	{
		strcpy(cat, s1);
	}

	if (s2 != NULL)
	{
		strcat(cat, s2);
	}

	return (cat);
}
