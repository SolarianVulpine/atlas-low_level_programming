#include <stdio.h>
#include <string.h>

int main()

{
char destination[12] = "First";
const char *source = "Second";

strcat(destination, source);

printf("Result: %s\n", destination);

return 0;
}
