#include<stdio.h>
#include<conio.h>
int main() {
	char a;
	printf("단일 영문자 입력 : ");
	scanf("%c", &a);
	puts("---결과 출력---");
	if (a >= 97 && a <= 122)
		printf("입력한 문자 '%c'는 소문자 입니다.", a);
	else if (a >= 65 && a <= 90)
		printf("입력한 문자 '%c'는 대문자 입니다.", a);
	getch();
	return 0;
}