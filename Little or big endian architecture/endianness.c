#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int i = 123;
    char *p = (char *) &i;
    
    printf("Your computer architecture is ");
    
    if (*p == 123) 
        printf ("little endian\n");
	else 
        printf ("big endian\n");
    
    
    return 0;
}
