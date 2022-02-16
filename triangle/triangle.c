#include "triangle.h"

// ���� �Ʒ��� ������ �ﰢ��
void triangle1() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

// ������ �Ʒ��� ������ �ﰢ��
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

// ���� ���� ������ �ﰢ��
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

// ������ ���� ������ �ﰢ��
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

// �������� �̵�ﰢ��
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

// ���� �̵�ﰢ��
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