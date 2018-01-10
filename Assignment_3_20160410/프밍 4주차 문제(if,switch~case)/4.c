#include<stdio.h>
#include<conio.h>
int main() {
	int a;
	puts("***선린 소프트웨어 전시회 입장***");
	printf("몇 살입니까?(18세 미만 무료) : ");
	scanf("%d", &a);
	puts("---결과 출력---");
	if (a >= 0 && a < 18)
		printf("입장료 : 0원");
	else
		printf("입장료 : 1500원");
	getch();
	return 0;
}