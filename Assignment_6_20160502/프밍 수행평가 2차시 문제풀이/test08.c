#include<stdio.h>
#include<conio.h>
int main() {
	int a, b;
	int i, j;
	printf("���� : ");
	scanf("%d", &a);
	printf("���� : ");
	scanf("%d", &b);
	puts("---Output---");
	for (i = 1; i <= b; i++) {
		for (j = 1; j <= a; j++) {
			printf("*");
		}
		printf("\n");
	}
	getch();
	return 0;
}