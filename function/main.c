#include "getSum.h"

int main() {
	int m, n;
	printf("계산할 범위 입력(N ~ M) : ");
	scanf_s("%d %d", &m, &n);
	printf("Sum of (%d to %d) = %d\n", m,n,getSum(m, n));

	printf("현재시각 : %d시\n", getHour());


	return 0;
}