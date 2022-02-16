#include "triangle.h"

// 왼쪽 아래가 직각인 삼각형
void triangle1() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

// 오른쪽 아래가 직각인 삼각형
void triangle2() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i + j >= 11) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

// 왼쪽 위가 직각인 삼각형
void triangle3() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i + j <= 11) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

// 오른쪽 위가 직각인 삼각형
void triangle4() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if (j >= i) {
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

// 뒤집어진 이등변삼각형
void triangle5() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * (10 - i) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}

// 정상 이등변삼각형
void triangle6() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10 - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}