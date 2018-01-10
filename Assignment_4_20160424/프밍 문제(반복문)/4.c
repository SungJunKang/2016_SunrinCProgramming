#include<stdio.h>
#include<conio.h>
int main() {
	int n, i;
	double input = 0;
	double max = 0;
	printf("입력될 수의 개수 : ");
	scanf("%d", &n);
	printf("%d개의 실수 입력 : ", n);
	for (i = 0; i<n; i++) {
		scanf("%lf", &input);
		if (max<input) {
			max = input;
		}
	}
	puts("---결과 출력---");
	printf("최대값 : %.2f", max);
	getch();
	return 0;
}