#include<stdio.h>
#include<conio.h>
int main() {
	int input;
	int sum = 0;
	int cnt = 0;
	while (1) {
		printf("정수 입력 : ");
		scanf("%d", &input);
		if (input == 999) {
			break;
		}
		sum += input;
		cnt++;
	}
	puts("---결과 출력---");
	printf("합 : %d\n", sum);
	printf("평균 : %.2f", (double)sum / cnt);
	getch();
	return 0;
}