#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void bof(char *ip) {
	char buffer[30];
	strcpy(buffer, ip);
	printf("Your output is %s\n", buffer);
}

int main(int argc, char** argv){
	bof(argv[1]);
	return 0;
}
