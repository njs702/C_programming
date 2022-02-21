#include "getSum.h"
#define _CRT_SECURE_NO_WARNINGS

int getSum(int from, int to) {
	int result = 0;
	for (int i = from; i <= to; i++) {
		result += i;
	}
	return result;
}

int getHour() {
	time_t t = time(NULL); // t에 현재시각 저장
	struct tm date; // tm 구조체 타입의 날짜

	localtime_s(&date, &t); // 대한민국 표준시로 tm 구조체에 t 변수의 현재시각 정보 저장
	return date.tm_hour;
}