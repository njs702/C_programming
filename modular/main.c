#include <stdio.h>

void main() {
	int num;
	int value = 386;
	int h = value / 100;
	int d = value / 10 % 10;
	int n = value % 10;

	printf("%d��%d��%d\n", h, d, n);

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	while (num != 0) {
		int temp;
		temp = num % 10;
		printf("%d ", temp);
		num /= 10;
	}

}