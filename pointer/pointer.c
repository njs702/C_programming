#include <stdio.h>

void main() {
	
	int value = 38;
	char a = 'T';
	int* pi = &value;
	int** pi2 = &pi;
	char* pc = &a;

	printf("value °ª : %d, a°ª : %c\n", **pi2,*pc);
}