#include<stdio.h>
#include<conio.h>
int main() {
	char a, b;
	int i, tmp = 0;
	printf("���� ���ĺ� : ");
	scanf("%c", &a);
	fflush(stdin);
	printf("������ ���ĺ� : ");
	scanf("%c", &b);
	if (a>b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	for (i = a; i <= b; i++) {
		printf("%c ", i);
	}
	getch();
	return 0;
}