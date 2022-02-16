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