#include "movesharp.h"

void gotoxy(int x, int y) {
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void moveSharp() {
	int x = 40, y = 10;
	int ch;

	system("cls");
	while (1) {
		gotoxy(x, y);
		_putch('#');
		ch = _getch();
		if (ch == 0xE0 || ch == 0) {
			ch = _getch();
			switch (ch) {
			case 75:
				x--;
				break;

			case 77:
				x++;
				break;

			case 72:
				y--;
				break;

			case 80:
				y++;
				break;
			}
		}
		else {
			switch (ch) {
			case ' ':
				system("cls");
				break;
			case 'q':
			case 'Q':
				exit(0);
			}
		}
	}
}