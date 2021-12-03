//formatstr2.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char password[20];

void read()
{
    FILE *f = fopen("password.txt", "r");
    fgets(password, sizeof(password), f);
    fclose(f);
}


void main()
{
    read();
    
    char input[100];    
    printf("Steal the secret: ");

    fgets(input, sizeof(input), stdin);
    printf("Did you succeed :");
    printf(input);
}
