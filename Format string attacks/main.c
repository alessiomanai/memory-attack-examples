#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

void vulnerable(){
	
	char buffer[SIZE];
	if(fgets(buffer, sizeof(buffer), stdin) == NULL)
		return;	
	printf(buffer);		//Attacker can control format string

}

int main()
{
    vulnerable();
    
    printf("100% daniele"); //Prints stack entry 4 bytes above saved %eip
	
	printf("100% non va bene!"); //writes the number 3 to address pointed to by stack entry

	printf("%s %s %s %s %s"); //Prints a series of stack entries as string
	
	printf("%08x %08x %08x %08x %08x"); //Prints a series of stack entries as integers

    return 0;
}
