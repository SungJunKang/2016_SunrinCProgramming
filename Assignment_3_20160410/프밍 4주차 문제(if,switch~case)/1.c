#include<stdio.h>
#include<conio.h>
int main() {
	char a;
	printf("단일 영문자 입력 : ");
	scanf("%c", &a);
	puts("---결과 출력---");
	if (a >= 65 && a <= 90)
		printf("소문자로 변환 : %c", a + 32);
	else if (a >= 97 && a <= 122)
		printf("대문자로 변환 : %c", a - 32);
	getch();
	return 0;
}