#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void win(){
	printf("Code flow successfully changed!\n");
}

int main(int argc, char** argv) {
	char buffer[64];
	gets(buffer);

	printf("Your output is %s\n", buffer);
}
