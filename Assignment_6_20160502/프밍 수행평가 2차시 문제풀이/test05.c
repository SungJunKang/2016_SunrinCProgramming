#include<stdio.h>
#include<conio.h>
int main() {
	char ch;
	printf("문자 입력 : ");
	scanf("%c", &ch);
	puts("---Output---");
	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
		printf("입력하신 문자는 영문자입니다.\n");
	else if (ch >= '1' && ch <= '9')
		printf("입력하신 문자는 숫자입니다.\n");
	else
		printf("입력하신 문자는 특수문자입니다.\n");
	getch();
	return 0;
}