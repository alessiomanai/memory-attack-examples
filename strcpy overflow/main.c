#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#define SIZE 10


void assignValueUnSafe(char *stringa){

	char str[SIZE];
	int checkSize;

	strcpy(str, stringa);	//possible write overflow
	checkSize = strlen(str); //read overflow

	printf("String length is: %d", checkSize);

}

void assignValue(char *stringa){

	char str[SIZE];
	int checkSize;

	strlcpy(str, stringa, sizeof(str));	//if write overflow, blocked
	checkSize = strlen(str); //return 9

	printf("String length is: %d", checkSize);

}

int main()
{
	char stringa[200];
	int c;

	printf("Insert string: ");
	fgets(stringa, sizeof(stringa), stdin);

    printf("Choose option:\n1) strcpy\n2) strlcpy\nSelect: ");
    scanf("%d", &c);

    if(c == 1)
		assignValueUnSafe(stringa);
	else
		assignValue(stringa);


    return 0;
}
