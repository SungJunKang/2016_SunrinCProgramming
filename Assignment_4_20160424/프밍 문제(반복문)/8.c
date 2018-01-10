#include<stdio.h>
#include<conio.h>
int main() {
	int input;
	int i;
	int sum = 0;
	printf("정수 입력 : ");
	scanf("%d", &input);
	puts("---결과 출력---");
	for (i = 1; i<input; i++) {
		if (input%i == 0) {
			sum += i;
		}
	}
	if (sum == input)
		printf("%d은 완전수입니다.", input);
	else
		printf("%d은 완전수가 아닙니다", input);
	getch();
	return 0;
}