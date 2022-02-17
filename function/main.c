#include "getSum.h"

int main() {
	int m, n;
	printf("����� ���� �Է�(N ~ M) : ");
	scanf("%d %d", &m, &n);
	printf("Sum of (%d to %d) = %d\n", m,n,getSum(m, n));

	printf("����ð� : %d��\n", getHour());


	return 0;
}