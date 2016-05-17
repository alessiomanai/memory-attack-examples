#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[SIZE];
    char *p;
    int i, length;

    while(1){

        printf("Heartbleed overflow example\nInsert lenght: ");

        p = fgets(buffer, sizeof(buffer), stdin);

        if (p == NULL){
            return 0;
        }

        length = atoi(p);	//possible violation with atoi() function

        printf("Insert message: ");

        p = fgets(buffer, sizeof(buffer), stdin);

        if (p == NULL){
            return 0;
        }

        for (i = 0; i < length; i++){ 	//it may exceed from actual string

            if(!iscntrl(buffer[i])){

                printf("%c", buffer[i]);

            } else {
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}
