#include <stdio.h>
#include "func.h"

int main(int argc, char* argv[]) {
	printf("Byebye!\n");

	for(int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
	
	printf("See you again!\n");

	int ans = add_func(1, 1) + sub_func(1, 10);
	printf("the result is %d\n", ans);

	return 0;
}
