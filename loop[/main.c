#include "ch7.h"

void main() {
	int n;
	printf("### N ������ ���� ����ϴ� ���α׷� ###\n");
	printf("N �Է��ϼ��� : ");
	scanf_s("%d", &n);

	printf("N ������ �� : %d\n", sum(n));
	printf("### N ������ ���� ����ϴ� ���α׷� ���� ###\n");

	printf("### N ������  Ȧ���� ���� ����ϴ� ���α׷� ###\n");
	printf("N �Է��ϼ��� : ");
	scanf_s("%d", &n);

	printf("N ������ �� : %d\n", oddSum(n));
	printf("### N ������ Ȧ���� ���� ����ϴ� ���α׷� ���� ###\n");
}