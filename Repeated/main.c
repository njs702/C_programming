#include <stdio.h>

void main() {
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