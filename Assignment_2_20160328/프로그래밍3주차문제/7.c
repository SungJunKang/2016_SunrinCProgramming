#include<stdio.h>
#include<conio.h>
int main() {
	int a, b;
	double sum;
	puts("�� ���� ������ �Է��� �ּ���.");
	printf("1. ���� A : ");
	scanf("%d", &a);
	printf("2. ���� B : ");
	scanf("%d", &b);
	puts("--��� ���--");
	sum = (a * 100) / b;
	printf("A�� ���� B�� %d %% �Դϴ�.",(int)sum);
	getch();
	return 0;
}