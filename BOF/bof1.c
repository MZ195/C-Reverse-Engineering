#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main (int argc, char** argv) {
	volatile int modified;
	char buffer[64];
	
	modified = 0;
	gets(buffer);
	
	if(modified != 0){
		printf("you have changed the 'modified' variable\n");
	} else {
		printf("Try again.\n");
	}
	return 0;
}
