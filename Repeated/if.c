#include <stdio.h>

void if_() {
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

void logic_() {
	int blood;
	printf("### 혈당 체크 프로그램 ###\n");
	printf("현재 혈당을 입력하세요 : ");
	scanf_s("%d", &blood);
	if (70 < blood && blood <= 109) {
		puts("정상 혈당입니다.");
	}
	else {
		puts("건강 관리가 필요해요.");
	}
	printf("### 혈당 체크 프로그램 종료###\n");
}
