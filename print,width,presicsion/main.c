#include <stdio.h>

void main() {
	int value = 62;
	char ch = 'K';
	double pi = 3.14;

	printf("������ %d�̰� ���ڴ� %c �Դϴ�.\n", value, ch);
	printf("###%d###\n", value);
	printf("###%5d###\n", value);
	printf("###%05d###\n", value);
	printf("###%-5d###\n", value);

	printf("###%f###\n", pi);
	printf("###%10f###\n", pi);
	printf("###%.2f###\n", pi);
	printf("###%10.2f###\n", pi);


}