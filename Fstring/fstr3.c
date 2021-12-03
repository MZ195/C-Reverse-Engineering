#include <stdio.h>

char secret[20];

void read()
{
    FILE *fp = fopen("password.txt", "r");
    fgets(secret, sizeof(secret), fp);
    fclose(fp);
}


void main()
{
    read();
    char buf[50];    
    printf("Hello try leaking my data:");
    fgets(buf, sizeof(buf), stdin);
    printf(buf);
    printf("\n\n");
 
}
