#include <stdio.h>

void main() {
	
	int value = 38;
	char a = 'T';
	int* pi = &value;
	char* pc = &a;
	

	printf("value �� : %d, a�� : %c\n", *pi,*pc);
}