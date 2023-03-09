#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printflag() {
	const char* flag = FLAG_VALUE;
	printf("Congratulations on your first basic hack\n");
	printf("%s\n", flag);
	exit(0);
}

void GetInput() {
	char input[100];
	printf("please enter the password\n");
	gets(input);
	return;
}

int main() {
    GetInput();
    //TODO: Implement the printflag function
    printf("Password comparison logic in the works, please be patient\n");
    return 0;
}
