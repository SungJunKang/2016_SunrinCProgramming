#include<stdio.h>
#include<conio.h>
int main() {
	int a, b;
	int tmp;
	int i;
	printf("���� A : ");
	scanf("%d", &a);
	printf("���� B : ");
	scanf("%d", &b);
	if (a > b) {
		tmp = a;
		a = b;
		b = tmp;
		printf("A�� B�� ��ȯ�մϴ� : A=%d,B=%d\n", a, b);
	}
	puts("---Output---");
	puts("�� �� ������ ���� ���");
	for (i = a; i <= b; i++) {
		printf("%-3d", i);
	}
	getch();
	return 0;
}