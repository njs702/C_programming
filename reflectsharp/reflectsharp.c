#include "reflectsharp.h"

void gotoxy(int x, int y) {
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void reflectSharp() {
	int x = 40, y = 12;
	int dx = 1, dy = 1;

	system("cls");
	while (_kbhit() == FALSE) {
		gotoxy(x, y);
		_putch(' ');
		x += dx;
		y += dy;
		gotoxy(x, y); 
		_putch('#');
		if (x == 79 || x == 1) {
			dx = -dx;
		}
		if (y == 24 || y == 1) {
			dy = -dy;
		}
		Sleep(200);
	}
}

void reflectSharp2() {
	int x = 40, y = 12, dx = 1, dy = 1;
	for (system("cls"); !_kbhit(); Sleep(30)) {
		gotoxy(x, y); _putch(' ');
		gotoxy(x += dx, y += dy); _putch('#');
		dx *= (x == 79 || x == 1) * -2 + 1;
		dy *= (y == 24 || y == 1) * -2 + 1;
	}
}