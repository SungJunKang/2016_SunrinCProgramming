#include<stdio.h>
#include<conio.h>
int main() {
	int a, i;
	int sum = 0;
	printf("���� �Է� : ");
	scanf("%d", &a);
	puts("---Output---");
	for (i = 1; i <= a; i++) {
		if (i % 2 == 1) {
			sum += i;
		}
	}
	printf("1~%d���� Ȧ���� �� : %d", a,sum);
	getch();
	return 0;
}