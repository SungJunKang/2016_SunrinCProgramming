#include<stdio.h>
#include<conio.h>
int main() {
	int a, b, c, d;
	double avg_1, avg_2;
	puts("4���� ���� �Է�");
	printf("���� A : ");
	scanf("%d", &a);
	printf("���� B : ");
	scanf("%d", &b);
	printf("���� C : ");
	scanf("%d", &c);
	printf("���� D : ");
	scanf("%d", &d);
	avg_1 = (double)a / b;
	avg_2 = (double)c / d;
	puts("---��� ���---");
	if(avg_1>avg_2)
		printf("%d/%d(%.2f)�� %d/%d(%.2f)���� ũ��.",a,b,avg_1,c,d,avg_2);
	else
		printf("%d/%d(%.2f)�� %d/%d(%.2f)���� �۴�.",a,b,avg_1,c,d,avg_2);
	getch();
	return 0;
}