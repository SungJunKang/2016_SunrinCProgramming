#include<stdio.h>
#include<conio.h>
int main() {
	int a, b, c;
	printf("���� 3�� �Է� : ");
	scanf("%d %d %d", &a, &b, &c);
	puts("---��� ���---");
	if (a <= b && a > c || a <= c && a >= b)
		printf("�߰� ���� %d�Դϴ�.", a);
	else if(b <= a && b > c || b <= c && b >= a)
		printf("�߰� ���� %d�Դϴ�.", b);
	else if (c <= a && c >= b || c <= b && c >= a)
		printf("�߰� ���� %d�Դϴ�.", c);
	else if(a == b == c)
		printf("�߰� ���� %d�Դϴ�.", a);
	getch();
	return 0;
}