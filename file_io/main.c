#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	FILE* f;
	char* str = "�� ������ C ǥ�� �Լ��� ������ �ؽ�Ʈ �����Դϴ�.\n"
		"C����̺��� Temp ���丮�� Test.txt��� �̸����� �����˴ϴ�.\n";

	f= fopen("c:\\Temp\\Test.txt", "wt");
	if (f == NULL) {
		puts("���� ���� ����");
		return 1;
	}
	else {
		fputs(str, f);
		fclose(f);
	}

	char buf[256];

	f = fopen("c:\\Temp\\Test.txt", "rt");
	//FILE* f2 = fopen_s(&f2,"c:\\Temp\\Test.txt", "rt");

	if (f == NULL) {
		puts("���� �б� ����");
		return 1;
	}
	else {
		while (1) {
			if (fgets(buf, 256, f) == NULL) {
				break;
			}
			printf("%s\n", buf);
		}
		
	}

}