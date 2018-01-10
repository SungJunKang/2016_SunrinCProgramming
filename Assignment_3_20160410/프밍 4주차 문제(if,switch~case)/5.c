#include<stdio.h>
#include<conio.h>
int main() {
	int a, b;
	puts("서로 다른 두 수를 입력");
	printf("정수 A : ");
	scanf("%d", &a);
	printf("정수 B : ");
	scanf("%d", &b);
	puts("---결과 출력---");
	if (a > b)
		printf("A와 B 중 더 큰 수 : %d", a);
	else
		printf("A와 B 중 더 큰 수 : %d", b);
	getch();
	return 0;
}