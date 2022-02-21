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
	OutBoxMessage("박스를 그리고 그 안에 문자열을 출력한다.");
	OutBoxMessage("전달된 문자열의 길이에 적당한 박스를 스스로 계산한다.");
	OutBoxMessage("신기하군");
}