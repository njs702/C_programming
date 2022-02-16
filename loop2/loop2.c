#include "loop2.h"

void gotoxy(int x, int y) {
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void ruler() {
	for (int i = 0; i <= 30; i++) {
		if (i % 10 == 0) {
			_putch('|');
		}
		else {
			_putch('-');
		}
	}
}

void snail() {
	for (int i = 1; i <= 75; i++) {
		gotoxy(i, 10);
		if (i % 2 == 0) {
			puts(" __@");
		}
		else {
			puts(" ^^@");
		}
		Sleep(500);
	}
}

void charani2() {
	system("cls");
	for (int i = 0; i < 7; i++) {
		gotoxy(0, 10);
		for (int x = 0; x < 80; x++) {
			_putch(x % 7 == i ? 'O' : '.');
		}
		Sleep(200);
	}
}