#include <stdio.h>
#include <string.h>

void OutBoxMessage(char* str) {
	int len = strlen(str);
	for (int i = 0; i < len + 4; i++) {
		putch('-');
	}
	puts("");
	printf("| %s |\n", str);
	for (int i = 0; i < len + 4; i++) {
		putch('-');
	}
	puts("");
}

void main() {
	OutBoxMessage("�ڽ��� �׸��� �� �ȿ� ���ڿ��� ����Ѵ�.");
	OutBoxMessage("���޵� ���ڿ��� ���̿� ������ �ڽ��� ������ �Ի��Ѵ�.");
}