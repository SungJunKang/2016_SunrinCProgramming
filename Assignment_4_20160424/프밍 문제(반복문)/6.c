#include<stdio.h>
#include<conio.h>
int main() {
	int input;
	int i = 0, j = 0;
	int cnt = 0;
	int x = 0;
	printf("���� �Է� : ");
	scanf("%d", &input);
	puts("---��� ���---");
	printf("1~%d������ �Ҽ� ��� : ", input);
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
	printf("\n1~%d������ �Ҽ� ���� : %d��", input, cnt);
	getch();
	return 0;
}