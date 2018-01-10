#include<stdio.h>
#include<conio.h>
int main() {
	int n, i;
	double a, max = 0;
	printf("입력될 수의 개수 : ");
	scanf("%d", &n);
	printf("%d개의 실수를 입력\n",n);
	for (i = 1; i <= n; i++) {
		printf("숫자 %d: ", i);
		scanf("%lf", &a);
		if (a > max) {
			max = a;
		}
	}
	puts("---Output---");
	printf("최대값 : %.2f\n", max);
	getch();
	return 0;
}