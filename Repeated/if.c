#include <stdio.h>

// 조건문 practice
void if_() {
	int input;

	printf("### 2 + 3 판별 프로그램 ###\n");
	printf("2 + 3을 입력하세요 : ");
	scanf_s("%d", &input);

	if (input == 5) {
		printf("정답입니다.\n");
		puts("Congratulation!");
	}
	else if (input == 6) {
		printf("곱셈이 아니라 덧셈입니다.\n");
	}
	else {
		printf("틀렸습니다.\n");
	}
	printf("### 2 + 3 판별 종료 ###\n\n");
} 

// 논리 연산 practice
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
	printf("### 혈당 체크 프로그램 종료###\n\n");
}

// 삼항 조건 연산 practice
void logic3_() {
	printf("### 키 체크 프로그램 ###\n");
	int kim = 182, lee = 174;
	int tall = kim > lee ? kim : lee;

	printf("큰 사람의 키 : %d\n",tall);
	printf("### 키 체크 프로그램 종료###\n\n");
}
