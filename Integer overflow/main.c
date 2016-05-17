#include <stdio.h>
#include <stdlib.h>

char *foo() {

	unsigned short x = 65535;

	x++; 	//integer overflow

	char *p = malloc(x * sizeof(char));

	p[1] = 'a'; 	//memory violation

	return p;

}

int main()
{
    char *p = NULL;

    p = foo();

    return 0;
}
