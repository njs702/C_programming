#include "getSum.h"

int main() {
	int m, n;
	printf("����� ���� �Է�(N ~ M) : ");
	scanf_s("%d %d", &m, &n);
	printf("Sum of (%d to %d) = %d\n", m,n,getSum(m, n));
	return 0;
}