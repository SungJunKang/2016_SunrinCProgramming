#include<stdio.h>
#include<conio.h>
int main() {
	int a, b;
	double sum;
	puts("두 개의 정수를 입력해 주세요.");
	printf("1. 정수 A : ");
	scanf("%d", &a);
	printf("2. 정수 B : ");
	scanf("%d", &b);
	puts("--결과 출력--");
	sum = (a * 100) / b;
	printf("A의 값은 B의 %d %% 입니다.",(int)sum);
	getch();
	return 0;
}