#include <stdio.h>

int main() {
	char name[20];
	printf("Hello World\n");
	printf("Enter name: ");
	scanf("%s", name);
	printf("Hello %s\n", name);

	return 0;
}