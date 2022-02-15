#include <stdio.h>

void main() {
	
	int value = 38, value2;
	char a = 'T';
	int* pi = &value;
	int** pi2 = &pi;
	char* pc = &a;

	value2 = *pi;

	printf("value °ª : %d, value2 °ª : %d, a°ª : %c\n", **pi2,value2,*pc);
}