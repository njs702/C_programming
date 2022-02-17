#include "getSum.h"

int getSum(int from, int to) {
	int result = 0;
	for (int i = from; i <= to; i++) {
		result += i;
	}
	return result;
}