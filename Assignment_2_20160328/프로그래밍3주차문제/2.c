#include<stdio.h>
#include<conio.h>
int main() {
	int a, b, c, d, e, min;
	printf("5���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	min = (a < b) ? a : b;
	min = (min < c) ? min : c;
	min = (min < d) ? min : d;
	min = (min < e) ? min : e;
	printf("�Է��Ͻ� ������ ���� ���� ���ڴ� %d �Դϴ�.",min);
	getch();
	return 0;
}