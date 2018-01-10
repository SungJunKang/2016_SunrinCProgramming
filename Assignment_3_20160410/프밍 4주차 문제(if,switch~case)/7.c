#include<stdio.h>
#include<conio.h>
int main() {
	int a, b, c, d;
	double avg_1, avg_2;
	puts("4개의 정수 입력");
	printf("정수 A : ");
	scanf("%d", &a);
	printf("정수 B : ");
	scanf("%d", &b);
	printf("정수 C : ");
	scanf("%d", &c);
	printf("정수 D : ");
	scanf("%d", &d);
	avg_1 = (double)a / b;
	avg_2 = (double)c / d;
	puts("---결과 출력---");
	if(avg_1>avg_2)
		printf("%d/%d(%.2f)는 %d/%d(%.2f)보다 크다.",a,b,avg_1,c,d,avg_2);
	else
		printf("%d/%d(%.2f)는 %d/%d(%.2f)보다 작다.",a,b,avg_1,c,d,avg_2);
	getch();
	return 0;
}