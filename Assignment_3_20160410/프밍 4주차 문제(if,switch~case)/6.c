#include<stdio.h>
#include<conio.h>
int main() {
	int K, E, M, P, max, avg;
	puts("���� �Է�");
	printf("���� : ");
	scanf("%d", &K);
	printf("���� : ");
	scanf("%d", &E);
	printf("���� : ");
	scanf("%d", &M);
	printf("���α׷��� : ");
	scanf("%d", &P);
	max = K + E + M + P;
	avg = (max / 4);
	puts("---��� ���---");
	if (K < 40 && E < 40 && M < 40 && P < 40 || avg < 60)
		printf("���հ�..");
	else
		printf("�հ�!");
	getch();
	return 0;
}