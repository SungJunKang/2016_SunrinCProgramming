#include<stdio.h>
#include<conio.h>
int main() {
	int a, b;
	puts("���� �ٸ� �� ���� �Է�");
	printf("���� A : ");
	scanf("%d", &a);
	printf("���� B : ");
	scanf("%d", &b);
	puts("---��� ���---");
	if (a > b)
		printf("A�� B �� �� ū �� : %d", a);
	else
		printf("A�� B �� �� ū �� : %d", b);
	getch();
	return 0;
}