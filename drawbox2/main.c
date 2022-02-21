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
	OutBoxMessage("박스를 그리고 그 안에 문자열을 출력한다.");
	OutBoxMessage("전달된 문자열의 길이에 적당한 박스를 스스로 게산한다.");
}