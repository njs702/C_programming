#include <stdio.h>

void if_() {
	int input;

	printf("### 2 + 3 �Ǻ� ���α׷� ###\n");
	printf("2 + 3�� �Է��ϼ��� : ");
	scanf_s("%d", &input);

	if (input == 5) {
		printf("�����Դϴ�.\n");
		puts("Congratulation!\n");
	}
	else if (input == 6) {
		printf("������ �ƴ϶� �����Դϴ�.\n");
	}
	else {
		printf("Ʋ�Ƚ��ϴ�.\n");
	}
	printf("### 2 + 3 �Ǻ� ���� ###\n");
}

void logic_() {
	int blood;
	printf("### ���� üũ ���α׷� ###\n");
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &blood);
	if (70 < blood && blood <= 109) {
		puts("���� �����Դϴ�.");
	}
	else {
		puts("�ǰ� ������ �ʿ��ؿ�.");
	}
	printf("### ���� üũ ���α׷� ����###\n");
}
