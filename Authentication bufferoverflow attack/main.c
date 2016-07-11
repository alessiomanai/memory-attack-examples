#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *passphrase = "unhackable";
char *adminName = "admin";

void playGames(){}

int main()
{
    char username[20];
    char password[15];
    int auth = 0;

    printf("Enter the username: ");
    scanf("%s", username);

    printf("Enter the password: ");
    scanf("%s", password);

    if((strcmp(password, passphrase) == 0)
		&& (strcmp(username, adminName) == 0) ){
        printf ("Access granted!\n");
        auth = 1;
    }
    else{
        printf ("ERROR: Access denied!\n");
    }

    if(auth){
        printf("Greetings Professor Falken\n");
        printf("Shall we play a game?\n");
        playGames();
    } else
    		printf("Connection lost\n");

    return 0;

}
