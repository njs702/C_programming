#include <stdio.h>

void drawLine(int num) {
	for (int i = 0; i < num; i++)
		putch('-');
	puts("");
}

void main() {
	drawLine(15);
	printf("| 안녕하세요. |\n");
	drawLine(15);

	drawLine(25);
	printf("| 즐거운 하루 보내세요. |\n");
	drawLine(25);
}