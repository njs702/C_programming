#include <stdio.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS 


void main() {
	int age;
	float height;
	char name[32];
	int width, s_height;

	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);
	printf("Ű�� �Է��ϼ��� : ");
	scanf_s("%f", &height);
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name,sizeof(name) / sizeof(name[0]));

	printf("�ȳ��ϼ���. %d��, Ű %.2fcm�� %s��\n",age,height,name);

	printf("�簢���� ���� ���̸� �Է��ϼ��� : ");
	scanf_s("%d%d", &width, &s_height);

	printf("�簢���� ������ %d�Դϴ�. \n", width * s_height);

	puts("�ȳ��ϼ���.");
	puts("���� ��ħ�Դϴ�.");
	putch('^');

}