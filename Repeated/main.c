#include <stdio.h>

void main() {
	int input;

	printf("### 2 + 3 판별 프로그램 ###\n");
	printf("2 + 3을 입력하세요 : ");
	scanf_s("%d", &input);

	if (input == 5) {
		printf("정답입니다.\n");
		puts("Congratulation!\n");
	}
	else if (input == 6) {
		printf("곱셈이 아니라 덧셈입니다.\n");
	}
	else {
		printf("틀렸습니다.\n");
	}
	printf("### 2 + 3 판별 종료 ###\n");
}