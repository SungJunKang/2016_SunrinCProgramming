#include<stdio.h>
#include<conio.h>
int main() {
	int a, b, c, d, e, min;
	printf("5개의 정수를 입력하세요 : ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	min = (a < b) ? a : b;
	min = (min < c) ? min : c;
	min = (min < d) ? min : d;
	min = (min < e) ? min : e;
	printf("입력하신 숫자중 가장 작은 숫자는 %d 입니다.",min);
	getch();
	return 0;
}