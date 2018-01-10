#include<stdio.h>
#include<conio.h>
int main() {
	int a, i;
	int sum = 0;
	printf("정수 입력 : ");
	scanf("%d", &a);
	puts("---Output---");
	for (i = 1; i <= a; i++) {
		if (i % 2 == 1) {
			sum += i;
		}
	}
	printf("1~%d까지 홀수의 합 : %d", a,sum);
	getch();
	return 0;
}