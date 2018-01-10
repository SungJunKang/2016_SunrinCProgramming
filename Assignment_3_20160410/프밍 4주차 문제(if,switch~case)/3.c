#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main() {
	char a;
	printf("단일 문자 입력 : ");
	scanf("%c", &a);
	puts("---결과 출력---");
	if (isalpha(a)) 
		printf("입력한 문자 '%c'는 문자입니다", a);
	else if (isdigit(a)) 
		printf("입력한 문자 '%c'는 숫자입니다", a);
	else 
		printf("입력한 문자 '%c'는 특수문자입니다", a);
	getch();
	return 0;
}