#include<stdio.h>
#include<conio.h>
int main() {
	int a, b, c;
	printf("정수 3개 입력 : ");
	scanf("%d %d %d", &a, &b, &c);
	puts("---결과 출력---");
	if (a <= b && a > c || a <= c && a >= b)
		printf("중간 수는 %d입니다.", a);
	else if(b <= a && b > c || b <= c && b >= a)
		printf("중간 수는 %d입니다.", b);
	else if (c <= a && c >= b || c <= b && c >= a)
		printf("중간 수는 %d입니다.", c);
	else if(a == b == c)
		printf("중간 수는 %d입니다.", a);
	getch();
	return 0;
}