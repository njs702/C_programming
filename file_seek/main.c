#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	
	FILE* f;
	char buf[256];

	f = fopen("c:\\Temp\\Test.txt", "rt");
	if (f != NULL) {
		fseek(f, 12, SEEK_SET); // SEEK_SET : 맨앞에서부터 시작, 2번째 부터 읽는다
		fgets(buf, 256, f);
		
		printf("%s\n", buf);
		fclose(f);
	}

}

/*FILE* f;
	char* str = "이 파일은 C 표준 함수로 생성된 텍스트 파일입니다.\n"
		"C드라이브의 Temp 디렉토리에 Test.txt라는 이름으로 생성됩니다.\n";

	f = fopen("c:\\Temp\\Test.txt", "wt");
	if (f == NULL) {
		puts("파일 생성 실패");
		return 1;
	}
	else {
		fputs(str, f);
		fclose(f);
	}

	char buf[256];

	f = fopen("c:\\Temp\\Test.txt", "rt");

	if (f == NULL) {
		puts("파일 읽기 실패");
		return 1;
	}
	else {
		while (1) {
			if (fgets(buf, 256, f) == NULL) {
				break;
			}
			printf("%s\n", buf);
		}

	}*/