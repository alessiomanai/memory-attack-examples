#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void chooseOptions(){}

void adminPrivilege(){

    printf("Now you can use a command shell\n");

    system("bin/sh");

}

void userFunctions(){

    printf("You are logged as a user\n");

    chooseOptions();

}

int main()
{
    char username[20];

    printf("Insert username: ");
    scanf("%s", username);

    if (strcmp(username, "admin")){

        adminPrivilege();

    } else if (strcmp(username, "user")){

        userFunctions();

    } else {

        printf("Access denied\n");

    }

    return 0;
}
