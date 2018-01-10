#include<stdio.h>
#include<conio.h>
int main() {
	int input;
	int i = 0, j = 0;
	int cnt = 0;
	int x = 0;
	printf("정수 입력 : ");
	scanf("%d", &input);
	puts("---결과 출력---");
	printf("1~%d사이의 소수 출력 : ", input);
	for (i = 2; i <= input; i++) {
		x = 0;
		for (j = 2; j<i; j++) {
			if (i%j == 0)
				x++;
		}
		if (x == 0) {
			printf("%-3d", i);
			cnt++;
		}
	}
	printf("\n1~%d사이의 소수 개수 : %d개", input, cnt);
	getch();
	return 0;
}