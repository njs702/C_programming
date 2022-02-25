#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

// 문자열을 정수로 바꾸고 1을 더해주는 함수
char* str_function(char* str) {
	int temp_num = 0;
	char temp_str[256] = "";
	temp_num = atoi(str);
	temp_num += 1;
	_itoa(temp_num, temp_str, 10); // 증가한 숫자를 문자열로 변환
	return temp_str;
}

int main() {
	FILE* f;
	char temp_str[256] = "";
	f = fopen("c:\\Temp\\append.txt", "wt"); // write append mode
	if (f == NULL) {
		puts("파일 생성 실패\n");
		return 1;
	}
	else {
		fputs("#0", f);
		

		FILE* rf;
		int size = 0;
		rf = fopen("c:\\Temp\\append.txt", "r+");
		fseek(rf, 0, SEEK_END);    // 파일 포인터를 파일의 끝으로 이동시킴
		size = ftell(rf);          // 파일 포인터의 현재 위치를 얻음
		fseek(rf, 1, SEEK_SET); // 파일 포인터 # 다음으로 옮김
		fread(temp_str, size - 1, 1, rf); // #부터 다음까지의 문자열을 읽음
		printf("str = %s\n", temp_str);
		fclose(rf);
		fclose(f);
		
	}

	
	
}

/*
	1. 파일을 append mode로 연다
	2. # 글자를 지나치고 난 후 부터 판단 fseek(f,1,SEEK_SET)
	3. 해당 글자부터 파일의 끝까지 문자열을 받아옴
	4. 문자열 정수형으로 바꿔서 연산
	5. 연산된 결과를 #다음부터 write
*/


/*
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
*/

