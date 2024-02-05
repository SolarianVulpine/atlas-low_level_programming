#include <stdio.h>
#include <string.h>

char *_strcat(char *destination, const char *source);

int main()
{
	char destination[20] = "first";
	char source[] = "second";

	_strcat(destination, source);

	printf("Result: %s\n", destination);

	return 0;
}

char *_strcat(char *destination, const char *source)
{
	int i = 0;
	int j = 0;

	while (destination[i] != '\0')
			{
			i++;
			}

	while (source[j] != '\0')
	{
		destination[i] = source[j];
		i++;
		j++;
	}
	destination[i] = '\0';

	return destination;
}
