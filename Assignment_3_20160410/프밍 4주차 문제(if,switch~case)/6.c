#include<stdio.h>
#include<conio.h>
int main() {
	int K, E, M, P, max, avg;
	puts("점수 입력");
	printf("국어 : ");
	scanf("%d", &K);
	printf("영어 : ");
	scanf("%d", &E);
	printf("수학 : ");
	scanf("%d", &M);
	printf("프로그래밍 : ");
	scanf("%d", &P);
	max = K + E + M + P;
	avg = (max / 4);
	puts("---결과 출력---");
	if (K < 40 && E < 40 && M < 40 && P < 40 || avg < 60)
		printf("불합격..");
	else
		printf("합격!");
	getch();
	return 0;
}