#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int srd;
	int a, b, c;
	srand((unsigned int)time(NULL));
	srd = rand() % 201 + 300;
	printf("�߻��� ���� : %d\n", srd);
	puts("---Output---");
	a = srd / 100;
	b = srd / 10 % 10;
	c = (srd % 100)%10;
	printf("�߻��� ������ ���� : %d%d%d", c, b, a);
	getch();
	return 0;
}