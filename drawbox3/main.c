#include <stdio.h>

void putchs(int ch, int n)
{
	for (int i = 0; i < n; i++) {
		putch(ch);
	}
	puts("");
}

void OutBoxMessage(char* str)
{
	int len = strlen(str);
	putchs('-', len + 4);
	printf("| %s |\n", str);
	putchs('-', len + 4);
}

int main()
{
	OutBoxMessage("�ڽ��� �׸��� �� �ȿ� ���ڿ��� ����Ѵ�.");
	OutBoxMessage("���޵� ���ڿ��� ���̿� ������ �ڽ��� ������ ����Ѵ�.");
	OutBoxMessage("�ű��ϱ�");
}