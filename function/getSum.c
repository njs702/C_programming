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
	time_t t = time(NULL);
	struct tm date;

	localtime(&t);
	return date.tm_hour;
}