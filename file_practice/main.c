#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
	FILE* f;
	char* str = "0\n";
	f = fopen("c:\\Temp\\append.txt", "at"); // write append mode


	if (f == NULL) {
		puts("���� ���� ����\n");
		return 1;
	}
	else {
		FILE* gf;
		gf = fopen("c:\\Temp\\append.txt", "rt");
		char temp_str[256];
		int temp_num = 0;
		if (gf != NULL) {
			fseek(gf, -3, SEEK_END); // �ٹٲ��� offset ũ�� -4
			fgets(temp_str, 256, gf); // ���� �������� ���� �ִ� ���ڸ� �޾ƿ� ����
			temp_num = atoi(temp_str); // ���ڿ��� ���ڷ� ��ȯ(������ ����)
			temp_num += 1; // 1 ����
			_itoa(temp_num, temp_str, 10); // ������ ���ڸ� ���ڿ��� ��ȯ
			strcat(temp_str, "\n"); // �ٹٲ��� ���� ���ڿ��� \n �߰�
			//printf("%s\n", temp_str); // ��� TEST��
			fclose(gf);
		}
		printf("%d��(��) �߰��߽��ϴ�.\n", temp_num);
		fputs(temp_str, f); // append ���Ͽ� ������ ���� �߰�
		fclose(f);
	}

}