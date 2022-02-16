#include "sharpani.h"

void gotoxy(int x, int y) {
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void aniSharp() {
	system("cls");

	for (int i = 1; i < 80; i++) {
		gotoxy(i, 10);
		_putch('#');
		gotoxy(i - 1, 10);
		_putch(' ');
		Sleep(100);
	}
}