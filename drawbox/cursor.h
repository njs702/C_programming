#pragma once

#include <Windows.h>
#include <stdlib.h>
#include <time.h>

#define randomize() srand((unsigned)time(NULL)) // random �Լ��� seed���� ����ؼ� �������ֱ� ���� ó��
#define random(n) (rand() % n) // 0���� n ������ ���� �� �������� ����
#define delay(n) Sleep(n) // ms �������� ȭ�� ����
#define clrscr() system("cls") // �ܼ� ȭ�� clear
#define gotoxy(x,y) {COORD Pos = {x,y}; \
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos); } // �ֿܼ��� x,y ��ǥ�� �̵��ϴ� ��
#define showcursor(bShow) {CONSOLE_CURSOR_INFO CurInfo = {20,bShow};\
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&CurInfo);}  // Ŀ���� �β��� ������ ���� ���� ��ȯ?




