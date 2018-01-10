#include<stdio.h>
#include<conio.h>
int main() {
	int n, m;
	int i, j;
	printf("첫 번째 주사위의 최대값(n) : ");
	scanf("%d", &n);
	printf("두 번째 주사위의 최대값(m) : ");
	scanf("%d", &m);
	puts("---결과 출력---");
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			printf("%d---%-4d", i, j);
		}
		printf("\n");
	}
	getch();
	return 0;
}