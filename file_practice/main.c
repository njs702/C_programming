#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
	FILE* f;
	char* str = "0\n";
	f = fopen("c:\\Temp\\append.txt", "at"); // write append mode


	if (f == NULL) {
		puts("파일 생성 실패\n");
		return 1;
	}
	else {
		FILE* gf;
		gf = fopen("c:\\Temp\\append.txt", "rt");
		char temp_str[256];
		int temp_num = 0;
		if (gf != NULL) {
			fseek(gf, -3, SEEK_END); // 줄바꿈의 offset 크기 -4
			fgets(temp_str, 256, gf); // 파일 마지막에 적혀 있는 숫자를 받아와 저장
			temp_num = atoi(temp_str); // 문자열을 숫자로 변환(연산을 위해)
			temp_num += 1; // 1 증가
			_itoa(temp_num, temp_str, 10); // 증가한 숫자를 문자열로 변환
			strcat(temp_str, "\n"); // 줄바꿈을 위해 문자열에 \n 추가
			//printf("%s\n", temp_str); // 출력 TEST용
			fclose(gf);
		}
		printf("%d를(을) 추가했습니다.\n", temp_num);
		fputs(temp_str, f); // append 파일에 증가한 숫자 추가
		fclose(f);
	}

}