#include<stdio.h>
#include<conio.h>
int main() {
	int input;
	int i;
	int cnt = 0;
	printf("정수 입력 : ");
	scanf("%d", &input);
	puts("---결과 출력---");
	for (i = 0; i<input; i++) {
		if (i % 10 == 1) {
			printf("%-3d", i);
			cnt++;
		}
	}
	printf("\n(총 %d번)", cnt);
	getch();
	return 0;
}