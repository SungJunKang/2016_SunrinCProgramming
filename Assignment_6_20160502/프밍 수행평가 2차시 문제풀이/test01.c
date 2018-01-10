#include<stdio.h>
#include<conio.h>
int main() {
	int a, b;
	int tmp;
	int i;
	printf("정수 A : ");
	scanf("%d", &a);
	printf("정수 B : ");
	scanf("%d", &b);
	if (a > b) {
		tmp = a;
		a = b;
		b = tmp;
		printf("A와 B를 교환합니다 : A=%d,B=%d\n", a, b);
	}
	puts("---Output---");
	puts("두 수 구간의 숫자 출력");
	for (i = a; i <= b; i++) {
		printf("%-3d", i);
	}
	getch();
	return 0;
}