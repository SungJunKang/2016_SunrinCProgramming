#include<stdio.h>
#include<conio.h>
int main() {
	int n, m;
	int i, j;
	printf("ù ��° �ֻ����� �ִ밪(n) : ");
	scanf("%d", &n);
	printf("�� ��° �ֻ����� �ִ밪(m) : ");
	scanf("%d", &m);
	puts("---��� ���---");
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			printf("%d---%-4d", i, j);
		}
		printf("\n");
	}
	getch();
	return 0;
}