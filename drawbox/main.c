#include <stdio.h>

void drawLine(int num) {
	for (int i = 0; i < num; i++)
		putch('-');
	puts("");
}

void main() {
	drawLine(15);
	printf("| �ȳ��ϼ���. |\n");
	drawLine(15);

	drawLine(25);
	printf("| ��ſ� �Ϸ� ��������. |\n");
	drawLine(25);
}