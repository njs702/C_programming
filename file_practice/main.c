#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

// ���ڿ��� ������ �ٲٰ� 1�� �����ִ� �Լ�
char* str_function(char* str) {
	int temp_num = 0;
	char temp_str[256] = "";
	temp_num = atoi(str);
	temp_num += 1;
	_itoa(temp_num, temp_str, 10); // ������ ���ڸ� ���ڿ��� ��ȯ
	return temp_str;
}

int main() {
	FILE* f;
	char temp_str[256] = "";
	f = fopen("c:\\Temp\\append.txt", "wt"); // write append mode
	if (f == NULL) {
		puts("���� ���� ����\n");
		return 1;
	}
	else {
		fputs("#0", f);
		

		FILE* rf;
		int size = 0;
		rf = fopen("c:\\Temp\\append.txt", "r+");
		fseek(rf, 0, SEEK_END);    // ���� �����͸� ������ ������ �̵���Ŵ
		size = ftell(rf);          // ���� �������� ���� ��ġ�� ����
		fseek(rf, 1, SEEK_SET); // ���� ������ # �������� �ű�
		fread(temp_str, size - 1, 1, rf); // #���� ���������� ���ڿ��� ����
		printf("str = %s\n", temp_str);
		fclose(rf);
		fclose(f);
		
	}

	
	
}

/*
	1. ������ append mode�� ����
	2. # ���ڸ� ����ġ�� �� �� ���� �Ǵ� fseek(f,1,SEEK_SET)
	3. �ش� ���ں��� ������ ������ ���ڿ��� �޾ƿ�
	4. ���ڿ� ���������� �ٲ㼭 ����
	5. ����� ����� #�������� write
*/


/*
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
*/

