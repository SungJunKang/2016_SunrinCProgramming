#include<stdio.h>
#include<conio.h>
int main() {
	int a;
	puts("***���� ����Ʈ���� ����ȸ ����***");
	printf("�� ���Դϱ�?(18�� �̸� ����) : ");
	scanf("%d", &a);
	puts("---��� ���---");
	if (a >= 0 && a < 18)
		printf("����� : 0��");
	else
		printf("����� : 1500��");
	getch();
	return 0;
}