#include <stdio.h>

int main(int argc, char* argv[]) {
	printf("Byebye!\n");

	for(int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
	
	printf("See you again!\n");

	return 0;
}
