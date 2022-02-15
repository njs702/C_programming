#include <stdio.h>

void main() {
	int value = 62;
	char ch = 'K';
	double pi = 3.14;

	printf("정수는 %d이고 문자는 %c 입니다.\n", value, ch);
	printf("###%d###\n", value);
	printf("###%5d###\n", value);
	printf("###%05d###\n", value);
	printf("###%-5d###\n", value);

	printf("###%f###\n", pi);
	printf("###%10f###\n", pi);
	printf("###%.2f###\n", pi);
	printf("###%10.2f###\n", pi);


}