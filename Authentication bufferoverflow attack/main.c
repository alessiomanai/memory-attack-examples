#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *passphrase = "unhackable";

int main()
{
    char username[20];
    char password[15];
    int auth = 0;

    printf("Enter the username: ");
    scanf("%s", username);

    printf("Enter the password: ");
    scanf("%s", password);

    if(strcmp(username, "admin") && strcmp(password, passphrase)){
        printf ("ERROR: Access denied!\n");
    }
    else{
        printf ("Access granted!\n");
        auth = 1;
    }

    if(auth){

        printf ("Now you have root access\n");

    }

    return 0;
}
