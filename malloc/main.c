#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "malloc";
	char *string =  "gougou";

    setvbuf(stdout, NULL, _IONBF, 0);
	printf("%s", str);
	str[0] = 'a';
	printf("%s", str);
	return(0);
}
