#pragma once

#include <Windows.h>
#include <stdlib.h>
#include <time.h>

#define randomize() srand((unsigned)time(NULL)) // random 함수의 seed값을 계속해서 변경해주기 위한 처리
#define random(n) (rand() % n) // 0부터 n 까지의 정수 중 랜덤으로 추출
#define delay(n) Sleep(n) // ms 기준으로 화면 지연
#define clrscr() system("cls") // 콘솔 화면 clear
#define gotoxy(x,y) {COORD Pos = {x,y}; \
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos); } // 콘솔에서 x,y 좌표로 이동하는 것
#define showcursor(bShow) {CONSOLE_CURSOR_INFO CurInfo = {20,bShow};\
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&CurInfo);}  // 커서의 두께나 사이즈 등의 정보 변환?




