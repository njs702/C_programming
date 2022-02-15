#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 


void main() {
	int age;
	float height;
	char name[32];
	int width, s_height;

	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);
	printf("키를 입력하세요 : ");
	scanf_s("%f", &height);
	printf("이름을 입력하세요 : ");
	scanf_s("%s", name,32);

	printf("안녕하세요. %d살, 키 %.2fcm의 %s님\n",age,height,name);

	printf("사각형의 폭과 높이를 입력하세요 : ");
	scanf_s("%d%d", &width, &s_height);

	printf("사각형의 면적은 %d입니다. \n", width * s_height);

	puts("안녕하세요.");
	puts("좋은 아침입니다.");
	putch('^');

}