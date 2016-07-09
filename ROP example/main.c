#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void chooseOptions(){}

void adminPrivilege(){

    printf("Now you can use a command shell\n");

    system("/bin/sh");

}

void userFunctions(char* username){

    char auth[10];

    strcpy(auth, username);

    chooseOptions();

}

int main(int argc, char** argv)
{

    printf("You are logged as a user\n");

    userFunctions(argv[1]);

    return 0;
}
