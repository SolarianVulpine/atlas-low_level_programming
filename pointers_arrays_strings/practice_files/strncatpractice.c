#include <stdio.h>
#include <string.h>

int main()
{
	char dest2[20] = "This and ";
	char src2[5] = "that";

	strncat(dest2, src2, 2);

	printf("dest2: %s\n", dest2);

	return 0;
}
