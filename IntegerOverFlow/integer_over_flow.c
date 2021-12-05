#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void check(char* password);

void win(){
	printf("Congrats, you got a reverse shell!\n\n");
	system("/bin/sh");
}

int main(int argc, char* argv[]){

	if(argc != 2){
		printf("Please provide an argument!\n");
		exit(0);
	}

	check(argv[1]);
	return 0;
}

void check(char* password) {
	printf("Welcome, try getting a shell... \n");

	char buffer[10];
	int user_win = 0;
	unsigned char length = strlen(password);

	printf("The length of your password in %d\n\n", length);
	if(length >= 4 && length <= 8){
		strcpy(buffer, password);
		if(user_win != 0){
			printf("You won!\n");
			win();
		} else {
			printf("You suck :)\n");
		}
	} else {
		printf("Please keep the password between 4 & 8 characters\n");
	}

}
