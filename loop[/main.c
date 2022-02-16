#include "ch7.h"

void main() {
	int n;
	printf("### N 까지의 합을 계산하는 프로그램 ###\n");
	printf("N 입력하세요 : ");
	scanf_s("%d", &n);

	printf("N 까지의 합 : %d\n", sum(n));
	printf("### N 까지의 합을 계산하는 프로그램 종료 ###\n");

	printf("### N 까지의  홀수의 합을 계산하는 프로그램 ###\n");
	printf("N 입력하세요 : ");
	scanf_s("%d", &n);

	printf("N 까지의 합 : %d\n", oddSum(n));
	printf("### N 까지의 홀수의 합을 계산하는 프로그램 종료 ###\n");
}